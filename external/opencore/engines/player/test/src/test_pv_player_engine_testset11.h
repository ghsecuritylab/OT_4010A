
#ifndef TEST_PV_PLAYER_ENGINE_TESTSET11_H_INCLUDED
#define TEST_PV_PLAYER_ENGINE_TESTSET11_H_INCLUDED


#ifndef TEST_PV_PLAYER_ENGINE_H_INCLUDED
#include "test_pv_player_engine.h"
#endif

#ifndef TEST_PV_PLAYER_ENGINE_CONFIG_H_INCLUDED
#include "test_pv_player_engine_config.h"
#endif

#ifndef PVMF_STREAMING_DATA_SOURCE_H_INCLUDED
#include "pvmf_streaming_data_source.h"
#endif

#if RUN_FASTTRACK_TESTCASES
#ifndef PVPVXPARSER_H_INCLUDED
#include "pvpvxparser.h"
#endif
#endif

#ifndef PVMF_DOWNLOAD_DATA_SOURCE_H_INCLUDED
#include "pvmf_download_data_source.h"
#endif
#ifndef PVMF_SOURCE_CONTEXT_DATA_H_INCLUDED
#include "pvmf_source_context_data.h"
#endif

#ifndef DEFAULT_URLS_DEFINED
#define DEFAULT_URLS_DEFINED

#define AMR_MPEG4_RTSP_URL "rtsp://pvserveroha.pv.com/public/Interop/3GPP/pv2/pv-amr-475_mpeg4-20.3gp"
#define AMR_MPEG4_RTSP_URL_2 "rtsp://pvserveroha.pv.com/public/metadata/pvmetadata.mp4"
#define H263_AMR_RTSP_URL "rtsp://pvserveroha.pv.com/public/Interop/3GPP/pv2/pv-amr-122_h263-64.3gp"
#define MPEG4_RTSP_URL "rtsp://pvserveroha.pv.com/public/Interop/3GPP/pv2/pv-mpeg4rdatapartr64.3gp"
#define MPEG4_SHRT_HDR_RTSP_URL "rtsp://pvserveroha.pv.com/public/Interop/3GPP/pv2/pv-mpeg4shorthdrr64.3gp"
#define AAC_RTSP_URL     "rtsp://pvserveroha.pv.com/public/Interop/3GPP/pv2/pv-aac64_novisual.3gp"
#define MPEG4_AAC_RTSP_URL "rtsp://pvserveroha.pv.com/public/Interop/3GPP/pv2/pv2-aac64_mpeg4-rvlcs-64.3gp"
#define AMR_MPEG4_SDP_FILE "pv_amr_mpeg4.sdp"
#endif

class PVPlayerDataSourceURL;
class PVPlayerDataSink;
class PVPlayerDataSink;
class PVPlayerDataSinkFilename;
class PvmfFileOutputNodeConfigInterface;
class PvmiCapabilityAndConfig;
class PVMFDownloadDataSourcePVX;


class pvplayer_async_test_genericcancelall : public pvplayer_async_test_base
{
    public:
        pvplayer_async_test_genericcancelall(PVPlayerAsyncTestParam aTestParam,
                                             PVMFFormatType aVideoSinkFormat,
                                             PVMFFormatType aAudioSinkFormat,
                                             uint32 aTestID,
                                             bool aPauseResumeEnable,
                                             bool aSeekEnable,
                                             bool aWaitForEOS,
                                             bool aCloaking,
                                             bool aCancelDuringPrepare,
                                             int lastState,
                                             bool aCancelAllWhileProc)
                : pvplayer_async_test_base(aTestParam)
                , iPlayer(NULL)
                , iDataSource(NULL)
                , iDataSinkVideo(NULL)
                , iDataSinkAudio(NULL)
                , iIONodeVideo(NULL)
                , iIONodeAudio(NULL)
                , iMIOFileOutVideo(NULL)
                , iMIOFileOutAudio(NULL)
                , iCurrentCmdId(0)
                , iCancelAllCmdId(0)
                , iSessionDuration(0)
                , bcloaking(aCloaking)
                , oLiveSession(false)
                , iProtocolRollOver(false)
                , iProtocolRollOverWithUnknownURLType(false)
                , iPlayListURL(false)
                , iSourceContextData(NULL)
                , iStreamDataSource(NULL)
                , iDownloadContextDataPVX(NULL)
                , iPlayStarted(false)
                , iSeekDone(false)
        {
            iVideoSinkFormatType = aVideoSinkFormat;
            iAudioSinkFormatType = aAudioSinkFormat;
            oPauseResumeEnable = aPauseResumeEnable;
            oSeekEnable = aSeekEnable;
            oWaitForEOS = aWaitForEOS;
            oCancelDuringPrepare = aCancelDuringPrepare;
            iTestID = aTestID;
            iNumPlay = 0;
            iTargetNumPlay = 1;
            iNumBufferingStart = iNumBufferingComplete = iNumUnderflow = iNumDataReady = iNumEOS = 0;
            iDownloadOnly = iDownloadThenPlay = false;
            iEndState = (PVTestState)lastState;
            iCancelAllWhileProc = aCancelAllWhileProc;
        }

        ~pvplayer_async_test_genericcancelall() {}

        void StartTest();
        void Run();

        void CommandCompleted(const PVCmdResponse& aResponse);
        void HandleErrorEvent(const PVAsyncErrorEvent& aEvent);
        void HandleInformationalEvent(const PVAsyncInformationalEvent& aEvent);


        PVTestState iState;
        PVTestState iEndState;
        bool iCancelAllWhileProc;

        PVPlayerInterface* iPlayer;
        PVPlayerDataSourceURL* iDataSource;
        PVPlayerDataSink* iDataSinkVideo;
        PVPlayerDataSink* iDataSinkAudio;
        PVMFNodeInterface* iIONodeVideo;
        PVMFNodeInterface* iIONodeAudio;
        PvmiMIOControl* iMIOFileOutVideo;
        PvmiMIOControl* iMIOFileOutAudio;
        PVCommandId iCurrentCmdId;
        PVCommandId iCancelAllCmdId;


        void setMultiplePlayMode(uint32 aNum)
        {
            iMultiplePlay = true;
            iTargetNumPlay = aNum;
        }

        void setProtocolRollOverMode()
        {
            iProtocolRollOver = true;
        }

        void setProtocolRollOverModeWithUnknownURL()
        {
            iProtocolRollOverWithUnknownURLType = true;
        }

        void setPlayListMode()
        {
            iPlayListURL = true;
        }

    private:
        void HandleSocketNodeErrors(int32 aErr);
        void HandleRTSPNodeErrors(int32 aErr);
        void HandleStreamingManagerNodeErrors(int32 aErr);
        void HandleJitterBufferNodeErrors(int32 aErr);
        void HandleMediaLayerNodeErrors(int32 aErr);
        void HandleProtocolEngineNodeErrors(int32 aErr);


        void PrintMetadataInfo();

        PVMFFormatType iVideoSinkFormatType;
        PVMFFormatType iAudioSinkFormatType;
        OSCL_wHeapString<OsclMemAllocator> wFileName;
        oscl_wchar output[512];
        bool oPauseResumeEnable;
        bool oSeekEnable;
        bool oCancelDuringPrepare;
        bool oWaitForEOS;
        uint32 iTestID;

        PVPMetadataList iMetadataKeyList;
        Oscl_Vector<PvmiKvp, OsclMemAllocator> iMetadataValueList;
        int32 iNumValues;

        uint32 iSessionDuration;
        bool bcloaking;
        bool oLiveSession;

        bool iMultiplePlay;
        uint32 iNumPlay;
        uint32 iTargetNumPlay;

        bool iProtocolRollOver;
        bool iProtocolRollOverWithUnknownURLType;
        bool iPlayListURL;

        PvmiCapabilityAndConfig* iPlayerCapConfigIF;
        PvmiKvp* iErrorKVP;
        PvmiKvp iKVPSetAsync;
        OSCL_StackString<128> iKeyStringSetAsync;
        PVMFSourceContextData* iSourceContextData;

        PVMFStreamingDataSource* iStreamDataSource;

        //FTDL
        void CreateDownloadDataSource();
        uint8 iPVXFileBuf[4096];
        PVMFDownloadDataSourcePVX* iDownloadContextDataPVX;
        PVMFDownloadDataSourceHTTP* iDownloadContextDataHTTP;
        int32 iDownloadMaxfilesize;
#if RUN_FASTTRACK_TESTCASES
        CPVXInfo iDownloadPvxInfo;
#endif
        OSCL_wHeapString<OsclMemAllocator> iDownloadURL;
        OSCL_wHeapString<OsclMemAllocator> iDownloadFilename;
        OSCL_HeapString<OsclMemAllocator> iDownloadProxy;
        OSCL_wHeapString<OsclMemAllocator> iDownloadConfigFilename;
        int32 iNumBufferingStart, iNumBufferingComplete, iNumUnderflow, iNumDataReady, iNumEOS;
        bool iDownloadOnly, iDownloadThenPlay;
        bool iContentTooLarge;
        bool iPlayStarted, iSeekDone;
};

#endif
