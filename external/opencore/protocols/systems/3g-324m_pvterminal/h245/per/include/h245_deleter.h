
// ============================================================(Auto)=
// FILE: h245_deleter.h
//
// DESC: PER Delete routines for H.245
// -------------------------------------------------------------------
//  Copyright (c) 1998- 2000, PacketVideo Corporation.
//                   All Rights Reserved.
// ===================================================================

#ifndef PER_DELETER
#define PER_DELETER
#ifndef OSCL_TYPES_H_INCLUDED
#include "oscl_types.h"
#endif
void Delete_MultimediaSystemControlMessage(PS_MultimediaSystemControlMessage x);
void Delete_RequestMessage(PS_RequestMessage x);
void Delete_ResponseMessage(PS_ResponseMessage x);
void Delete_CommandMessage(PS_CommandMessage x);
void Delete_IndicationMessage(PS_IndicationMessage x);
void Delete_GenericInformation(PS_GenericInformation x);
void Delete_NonStandardMessage(PS_NonStandardMessage x);
void Delete_NonStandardParameter(PS_NonStandardParameter x);
void Delete_NonStandardIdentifier(PS_NonStandardIdentifier x);
void Delete_H221NonStandard(PS_H221NonStandard x);
void Delete_MasterSlaveDetermination(PS_MasterSlaveDetermination x);
void Delete_MasterSlaveDeterminationAck(PS_MasterSlaveDeterminationAck x);
void Delete_Decision(PS_Decision x);
void Delete_MasterSlaveDeterminationReject(PS_MasterSlaveDeterminationReject x);
void Delete_MsdRejectCause(PS_MsdRejectCause x);
void Delete_MasterSlaveDeterminationRelease(PS_MasterSlaveDeterminationRelease x);
void Delete_TerminalCapabilitySet(PS_TerminalCapabilitySet x);
void Delete_CapabilityTableEntry(PS_CapabilityTableEntry x);
void Delete_CapabilityDescriptor(PS_CapabilityDescriptor x);
void Delete_AlternativeCapabilitySet(PS_AlternativeCapabilitySet x);
void Delete_TerminalCapabilitySetAck(PS_TerminalCapabilitySetAck x);
void Delete_TerminalCapabilitySetReject(PS_TerminalCapabilitySetReject x);
void Delete_TcsRejectCause(PS_TcsRejectCause x);
void Delete_TableEntryCapacityExceeded(PS_TableEntryCapacityExceeded x);
void Delete_TerminalCapabilitySetRelease(PS_TerminalCapabilitySetRelease x);
void Delete_Capability(PS_Capability x);
void Delete_H233EncryptionReceiveCapability(PS_H233EncryptionReceiveCapability x);
void Delete_H235SecurityCapability(PS_H235SecurityCapability x);
void Delete_MultiplexCapability(PS_MultiplexCapability x);
void Delete_H222Capability(PS_H222Capability x);
void Delete_VCCapability(PS_VCCapability x);
void Delete_Aal1ViaGateway(PS_Aal1ViaGateway x);
void Delete_AvailableBitRates(PS_AvailableBitRates x);
void Delete_VccAal5Type(PS_VccAal5Type x);
void Delete_RangeOfBitRates(PS_RangeOfBitRates x);
void Delete_VccAal5(PS_VccAal5 x);
void Delete_VccAal1(PS_VccAal1 x);
void Delete_H223Capability(PS_H223Capability x);
void Delete_MobileOperationTransmitCapability(PS_MobileOperationTransmitCapability x);
void Delete_H223MultiplexTableCapability(PS_H223MultiplexTableCapability x);
void Delete_Enhanced(PS_Enhanced x);
void Delete_H223AnnexCCapability(PS_H223AnnexCCapability x);
void Delete_V76Capability(PS_V76Capability x);
void Delete_V75Capability(PS_V75Capability x);
void Delete_H2250Capability(PS_H2250Capability x);
void Delete_McCapability(PS_McCapability x);
void Delete_MediaPacketizationCapability(PS_MediaPacketizationCapability x);
void Delete_RSVPParameters(PS_RSVPParameters x);
void Delete_QOSMode(PS_QOSMode x);
void Delete_ATMParameters(PS_ATMParameters x);
void Delete_QOSCapability(PS_QOSCapability x);
void Delete_MediaTransportType(PS_MediaTransportType x);
void Delete_Atm_AAL5_compressed(PS_Atm_AAL5_compressed x);
void Delete_MediaChannelCapability(PS_MediaChannelCapability x);
void Delete_TransportCapability(PS_TransportCapability x);
void Delete_RedundancyEncodingCapability(PS_RedundancyEncodingCapability x);
void Delete_RedundancyEncodingMethod(PS_RedundancyEncodingMethod x);
void Delete_RTPH263VideoRedundancyEncoding(PS_RTPH263VideoRedundancyEncoding x);
void Delete_FrameToThreadMapping(PS_FrameToThreadMapping x);
void Delete_RTPH263VideoRedundancyFrameMapping(PS_RTPH263VideoRedundancyFrameMapping x);
void Delete_MultipointCapability(PS_MultipointCapability x);
void Delete_MediaDistributionCapability(PS_MediaDistributionCapability x);
void Delete_VideoCapability(PS_VideoCapability x);
void Delete_H261VideoCapability(PS_H261VideoCapability x);
void Delete_H262VideoCapability(PS_H262VideoCapability x);
void Delete_H263VideoCapability(PS_H263VideoCapability x);
void Delete_EnhancementLayerInfo(PS_EnhancementLayerInfo x);
void Delete_BEnhancementParameters(PS_BEnhancementParameters x);
void Delete_EnhancementOptions(PS_EnhancementOptions x);
void Delete_H263Options(PS_H263Options x);
void Delete_TransparencyParameters(PS_TransparencyParameters x);
void Delete_RefPictureSelection(PS_RefPictureSelection x);
void Delete_VideoBackChannelSend(PS_VideoBackChannelSend x);
void Delete_AdditionalPictureMemory(PS_AdditionalPictureMemory x);
void Delete_CustomPictureClockFrequency(PS_CustomPictureClockFrequency x);
void Delete_CustomPictureFormat(PS_CustomPictureFormat x);
void Delete_PixelAspectInformation(PS_PixelAspectInformation x);
void Delete_ExtendedPARItem(PS_ExtendedPARItem x);
void Delete_MPI(PS_MPI x);
void Delete_CustomPCFItem(PS_CustomPCFItem x);
void Delete_H263VideoModeCombos(PS_H263VideoModeCombos x);
void Delete_H263ModeComboFlags(PS_H263ModeComboFlags x);
void Delete_IS11172VideoCapability(PS_IS11172VideoCapability x);
void Delete_AudioCapability(PS_AudioCapability x);
void Delete_G7231(PS_G7231 x);
void Delete_G729Extensions(PS_G729Extensions x);
void Delete_G7231AnnexCCapability(PS_G7231AnnexCCapability x);
void Delete_G723AnnexCAudioMode(PS_G723AnnexCAudioMode x);
void Delete_IS11172AudioCapability(PS_IS11172AudioCapability x);
void Delete_IS13818AudioCapability(PS_IS13818AudioCapability x);
void Delete_GSMAudioCapability(PS_GSMAudioCapability x);
void Delete_DataApplicationCapability(PS_DataApplicationCapability x);
void Delete_Application(PS_Application x);
void Delete_T38fax(PS_T38fax x);
void Delete_Nlpid(PS_Nlpid x);
void Delete_T84(PS_T84 x);
void Delete_DataProtocolCapability(PS_DataProtocolCapability x);
void Delete_V76wCompression(PS_V76wCompression x);
void Delete_CompressionType(PS_CompressionType x);
void Delete_V42bis(PS_V42bis x);
void Delete_T84Profile(PS_T84Profile x);
void Delete_T84Restricted(PS_T84Restricted x);
void Delete_T38FaxProfile(PS_T38FaxProfile x);
void Delete_T38FaxRateManagement(PS_T38FaxRateManagement x);
void Delete_T38FaxUdpOptions(PS_T38FaxUdpOptions x);
void Delete_T38FaxUdpEC(PS_T38FaxUdpEC x);
void Delete_EncryptionAuthenticationAndIntegrity(PS_EncryptionAuthenticationAndIntegrity x);
void Delete_EncryptionCapability(PS_EncryptionCapability x);
void Delete_MediaEncryptionAlgorithm(PS_MediaEncryptionAlgorithm x);
void Delete_AuthenticationCapability(PS_AuthenticationCapability x);
void Delete_IntegrityCapability(PS_IntegrityCapability x);
void Delete_UserInputCapability(PS_UserInputCapability x);
void Delete_ConferenceCapability(PS_ConferenceCapability x);
void Delete_GenericCapability(PS_GenericCapability x);
void Delete_CapabilityIdentifier(PS_CapabilityIdentifier x);
void Delete_GenericParameter(PS_GenericParameter x);
void Delete_ParameterIdentifier(PS_ParameterIdentifier x);
void Delete_ParameterValue(PS_ParameterValue x);
void Delete_OpenLogicalChannel(PS_OpenLogicalChannel x);
void Delete_ReverseLogicalChannelParameters(PS_ReverseLogicalChannelParameters x);
void Delete_RlcMultiplexParameters(PS_RlcMultiplexParameters x);
void Delete_ForwardLogicalChannelParameters(PS_ForwardLogicalChannelParameters x);
void Delete_MultiplexParameters(PS_MultiplexParameters x);
void Delete_NetworkAccessParameters(PS_NetworkAccessParameters x);
void Delete_T120SetupProcedure(PS_T120SetupProcedure x);
void Delete_NetworkAddress(PS_NetworkAddress x);
void Delete_Distribution(PS_Distribution x);
void Delete_Q2931Address(PS_Q2931Address x);
void Delete_Address(PS_Address x);
void Delete_V75Parameters(PS_V75Parameters x);
OSCL_IMPORT_REF void Delete_DataType(PS_DataType x);
void Delete_H235Media(PS_H235Media x);
void Delete_MediaType(PS_MediaType x);
void Delete_H222LogicalChannelParameters(PS_H222LogicalChannelParameters x);
OSCL_IMPORT_REF void Delete_H223LogicalChannelParameters(PS_H223LogicalChannelParameters x);
void Delete_AdaptationLayerType(PS_AdaptationLayerType x);
void Delete_Al3(PS_Al3 x);
void Delete_H223AL1MParameters(PS_H223AL1MParameters x);
void Delete_ArqType(PS_ArqType x);
void Delete_CrcLength(PS_CrcLength x);
void Delete_HeaderFEC(PS_HeaderFEC x);
void Delete_TransferMode(PS_TransferMode x);
void Delete_H223AL2MParameters(PS_H223AL2MParameters x);
void Delete_Al2HeaderFEC(PS_Al2HeaderFEC x);
void Delete_H223AL3MParameters(PS_H223AL3MParameters x);
void Delete_Al3ArqType(PS_Al3ArqType x);
void Delete_Al3CrcLength(PS_Al3CrcLength x);
void Delete_HeaderFormat(PS_HeaderFormat x);
void Delete_H223AnnexCArqParameters(PS_H223AnnexCArqParameters x);
void Delete_NumberOfRetransmissions(PS_NumberOfRetransmissions x);
void Delete_V76LogicalChannelParameters(PS_V76LogicalChannelParameters x);
void Delete_Mode(PS_Mode x);
void Delete_ERM(PS_ERM x);
void Delete_Recovery(PS_Recovery x);
void Delete_SuspendResume(PS_SuspendResume x);
void Delete_V76HDLCParameters(PS_V76HDLCParameters x);
void Delete_CRCLength(PS_CRCLength x);
void Delete_H2250LogicalChannelParameters(PS_H2250LogicalChannelParameters x);
void Delete_MediaPacketization(PS_MediaPacketization x);
void Delete_RTPPayloadType(PS_RTPPayloadType x);
void Delete_PayloadDescriptor(PS_PayloadDescriptor x);
void Delete_RedundancyEncoding(PS_RedundancyEncoding x);
void Delete_TransportAddress(PS_TransportAddress x);
void Delete_UnicastAddress(PS_UnicastAddress x);
void Delete_IPSourceRouteAddress(PS_IPSourceRouteAddress x);
void Delete_Routing(PS_Routing x);
void Delete_IP6Address(PS_IP6Address x);
void Delete_IPXAddress(PS_IPXAddress x);
void Delete_IPAddress(PS_IPAddress x);
void Delete_MulticastAddress(PS_MulticastAddress x);
void Delete_MaIp6Address(PS_MaIp6Address x);
void Delete_MaIpAddress(PS_MaIpAddress x);
void Delete_EncryptionSync(PS_EncryptionSync x);
void Delete_EscrowData(PS_EscrowData x);
void Delete_OpenLogicalChannelAck(PS_OpenLogicalChannelAck x);
void Delete_ForwardMultiplexAckParameters(PS_ForwardMultiplexAckParameters x);
void Delete_AckReverseLogicalChannelParameters(PS_AckReverseLogicalChannelParameters x);
void Delete_AckMultiplexParameters(PS_AckMultiplexParameters x);
void Delete_OpenLogicalChannelReject(PS_OpenLogicalChannelReject x);
void Delete_OlcRejectCause(PS_OlcRejectCause x);
void Delete_OpenLogicalChannelConfirm(PS_OpenLogicalChannelConfirm x);
void Delete_H2250LogicalChannelAckParameters(PS_H2250LogicalChannelAckParameters x);
void Delete_CloseLogicalChannel(PS_CloseLogicalChannel x);
void Delete_Reason(PS_Reason x);
void Delete_Source(PS_Source x);
void Delete_CloseLogicalChannelAck(PS_CloseLogicalChannelAck x);
void Delete_RequestChannelClose(PS_RequestChannelClose x);
void Delete_RccReason(PS_RccReason x);
void Delete_RequestChannelCloseAck(PS_RequestChannelCloseAck x);
void Delete_RequestChannelCloseReject(PS_RequestChannelCloseReject x);
void Delete_RccRejectCause(PS_RccRejectCause x);
void Delete_RequestChannelCloseRelease(PS_RequestChannelCloseRelease x);
void Delete_MultiplexEntrySend(PS_MultiplexEntrySend x);
OSCL_IMPORT_REF void Delete_MultiplexEntryDescriptor(PS_MultiplexEntryDescriptor x);
void Delete_MultiplexElement(PS_MultiplexElement x);
void Delete_RepeatCount(PS_RepeatCount x);
void Delete_MuxType(PS_MuxType x);
void Delete_MultiplexEntrySendAck(PS_MultiplexEntrySendAck x);
void Delete_MultiplexEntrySendReject(PS_MultiplexEntrySendReject x);
void Delete_MultiplexEntryRejectionDescriptions(PS_MultiplexEntryRejectionDescriptions x);
void Delete_MeRejectCause(PS_MeRejectCause x);
void Delete_MultiplexEntrySendRelease(PS_MultiplexEntrySendRelease x);
void Delete_RequestMultiplexEntry(PS_RequestMultiplexEntry x);
void Delete_RequestMultiplexEntryAck(PS_RequestMultiplexEntryAck x);
void Delete_RequestMultiplexEntryReject(PS_RequestMultiplexEntryReject x);
void Delete_RequestMultiplexEntryRejectionDescriptions(PS_RequestMultiplexEntryRejectionDescriptions x);
void Delete_RmeRejectCause(PS_RmeRejectCause x);
void Delete_RequestMultiplexEntryRelease(PS_RequestMultiplexEntryRelease x);
void Delete_RequestMode(PS_RequestMode x);
void Delete_RequestModeAck(PS_RequestModeAck x);
void Delete_Response(PS_Response x);
void Delete_RequestModeReject(PS_RequestModeReject x);
void Delete_RmRejectCause(PS_RmRejectCause x);
void Delete_RequestModeRelease(PS_RequestModeRelease x);
void Delete_ModeDescription(PS_ModeDescription x);
void Delete_ModeElement(PS_ModeElement x);
void Delete_ModeType(PS_ModeType x);
void Delete_H235Mode(PS_H235Mode x);
void Delete_MediaMode(PS_MediaMode x);
void Delete_H223ModeParameters(PS_H223ModeParameters x);
void Delete_ModeAdaptationLayerType(PS_ModeAdaptationLayerType x);
void Delete_ModeAl3(PS_ModeAl3 x);
void Delete_V76ModeParameters(PS_V76ModeParameters x);
void Delete_H2250ModeParameters(PS_H2250ModeParameters x);
void Delete_RedundancyEncodingMode(PS_RedundancyEncodingMode x);
void Delete_SecondaryEncoding(PS_SecondaryEncoding x);
void Delete_VideoMode(PS_VideoMode x);
void Delete_H261VideoMode(PS_H261VideoMode x);
void Delete_Resolution(PS_Resolution x);
void Delete_H262VideoMode(PS_H262VideoMode x);
void Delete_ProfileAndLevel(PS_ProfileAndLevel x);
void Delete_H263VideoMode(PS_H263VideoMode x);
void Delete_H263Resolution(PS_H263Resolution x);
void Delete_IS11172VideoMode(PS_IS11172VideoMode x);
void Delete_AudioMode(PS_AudioMode x);
void Delete_ModeG7231(PS_ModeG7231 x);
void Delete_IS11172AudioMode(PS_IS11172AudioMode x);
void Delete_MultichannelType(PS_MultichannelType x);
void Delete_AudioSampling(PS_AudioSampling x);
void Delete_AudioLayer(PS_AudioLayer x);
void Delete_IS13818AudioMode(PS_IS13818AudioMode x);
void Delete_Is13818MultichannelType(PS_Is13818MultichannelType x);
void Delete_Is13818AudioSampling(PS_Is13818AudioSampling x);
void Delete_Is13818AudioLayer(PS_Is13818AudioLayer x);
void Delete_G7231AnnexCMode(PS_G7231AnnexCMode x);
void Delete_ModeG723AnnexCAudioMode(PS_ModeG723AnnexCAudioMode x);
void Delete_DataMode(PS_DataMode x);
void Delete_DmApplication(PS_DmApplication x);
void Delete_DmT38fax(PS_DmT38fax x);
void Delete_DmNlpid(PS_DmNlpid x);
void Delete_EncryptionMode(PS_EncryptionMode x);
void Delete_RoundTripDelayRequest(PS_RoundTripDelayRequest x);
void Delete_RoundTripDelayResponse(PS_RoundTripDelayResponse x);
void Delete_MaintenanceLoopRequest(PS_MaintenanceLoopRequest x);
void Delete_MlRequestType(PS_MlRequestType x);
void Delete_MaintenanceLoopAck(PS_MaintenanceLoopAck x);
void Delete_MlAckType(PS_MlAckType x);
void Delete_MaintenanceLoopReject(PS_MaintenanceLoopReject x);
void Delete_MlRejectCause(PS_MlRejectCause x);
void Delete_MlRejectType(PS_MlRejectType x);
void Delete_MaintenanceLoopOffCommand(PS_MaintenanceLoopOffCommand x);
void Delete_CommunicationModeCommand(PS_CommunicationModeCommand x);
void Delete_CommunicationModeRequest(PS_CommunicationModeRequest x);
void Delete_CommunicationModeResponse(PS_CommunicationModeResponse x);
void Delete_CommunicationModeTableEntry(PS_CommunicationModeTableEntry x);
void Delete_CmtDataType(PS_CmtDataType x);
void Delete_ConferenceRequest(PS_ConferenceRequest x);
void Delete_RequestTerminalCertificate(PS_RequestTerminalCertificate x);
void Delete_CertSelectionCriteria(PS_CertSelectionCriteria x);
void Delete_Criteria(PS_Criteria x);
void Delete_TerminalLabel(PS_TerminalLabel x);
void Delete_ConferenceResponse(PS_ConferenceResponse x);
void Delete_SendThisSourceResponse(PS_SendThisSourceResponse x);
void Delete_MakeTerminalBroadcasterResponse(PS_MakeTerminalBroadcasterResponse x);
void Delete_BroadcastMyLogicalChannelResponse(PS_BroadcastMyLogicalChannelResponse x);
void Delete_TerminalCertificateResponse(PS_TerminalCertificateResponse x);
void Delete_ChairTokenOwnerResponse(PS_ChairTokenOwnerResponse x);
void Delete_ExtensionAddressResponse(PS_ExtensionAddressResponse x);
void Delete_MakeMeChairResponse(PS_MakeMeChairResponse x);
void Delete_PasswordResponse(PS_PasswordResponse x);
void Delete_ConferenceIDResponse(PS_ConferenceIDResponse x);
void Delete_TerminalIDResponse(PS_TerminalIDResponse x);
void Delete_MCTerminalIDResponse(PS_MCTerminalIDResponse x);
void Delete_RequestAllTerminalIDsResponse(PS_RequestAllTerminalIDsResponse x);
void Delete_TerminalInformation(PS_TerminalInformation x);
void Delete_RemoteMCRequest(PS_RemoteMCRequest x);
void Delete_RemoteMCResponse(PS_RemoteMCResponse x);
void Delete_Reject(PS_Reject x);
void Delete_MultilinkRequest(PS_MultilinkRequest x);
void Delete_MaximumHeaderInterval(PS_MaximumHeaderInterval x);
void Delete_RequestType(PS_RequestType x);
void Delete_RemoveConnection(PS_RemoveConnection x);
void Delete_AddConnection(PS_AddConnection x);
void Delete_CallInformation(PS_CallInformation x);
void Delete_MultilinkResponse(PS_MultilinkResponse x);
void Delete_RespMaximumHeaderInterval(PS_RespMaximumHeaderInterval x);
void Delete_RespRemoveConnection(PS_RespRemoveConnection x);
void Delete_RespAddConnection(PS_RespAddConnection x);
void Delete_ResponseCode(PS_ResponseCode x);
void Delete_Rejected(PS_Rejected x);
void Delete_RespCallInformation(PS_RespCallInformation x);
void Delete_MultilinkIndication(PS_MultilinkIndication x);
void Delete_ExcessiveError(PS_ExcessiveError x);
void Delete_CrcDesired(PS_CrcDesired x);
void Delete_DialingInformation(PS_DialingInformation x);
void Delete_DialingInformationNumber(PS_DialingInformationNumber x);
void Delete_DialingInformationNetworkType(PS_DialingInformationNetworkType x);
void Delete_ConnectionIdentifier(PS_ConnectionIdentifier x);
void Delete_LogicalChannelRateRequest(PS_LogicalChannelRateRequest x);
void Delete_LogicalChannelRateAcknowledge(PS_LogicalChannelRateAcknowledge x);
void Delete_LogicalChannelRateReject(PS_LogicalChannelRateReject x);
void Delete_LogicalChannelRateRejectReason(PS_LogicalChannelRateRejectReason x);
void Delete_LogicalChannelRateRelease(PS_LogicalChannelRateRelease x);
void Delete_SendTerminalCapabilitySet(PS_SendTerminalCapabilitySet x);
void Delete_SpecificRequest(PS_SpecificRequest x);
void Delete_EncryptionCommand(PS_EncryptionCommand x);
void Delete_EncryptionAlgorithmID(PS_EncryptionAlgorithmID x);
void Delete_FlowControlCommand(PS_FlowControlCommand x);
void Delete_FccRestriction(PS_FccRestriction x);
void Delete_FccScope(PS_FccScope x);
void Delete_EndSessionCommand(PS_EndSessionCommand x);
void Delete_IsdnOptions(PS_IsdnOptions x);
void Delete_GstnOptions(PS_GstnOptions x);
void Delete_ConferenceCommand(PS_ConferenceCommand x);
void Delete_SubstituteConferenceIDCommand(PS_SubstituteConferenceIDCommand x);
void Delete_MiscellaneousCommand(PS_MiscellaneousCommand x);
void Delete_McType(PS_McType x);
void Delete_ProgressiveRefinementStart(PS_ProgressiveRefinementStart x);
void Delete_PrsRepeatCount(PS_PrsRepeatCount x);
void Delete_VideoFastUpdateMB(PS_VideoFastUpdateMB x);
void Delete_VideoFastUpdateGOB(PS_VideoFastUpdateGOB x);
void Delete_KeyProtectionMethod(PS_KeyProtectionMethod x);
void Delete_EncryptionUpdateRequest(PS_EncryptionUpdateRequest x);
void Delete_H223MultiplexReconfiguration(PS_H223MultiplexReconfiguration x);
void Delete_H223AnnexADoubleFlag(PS_H223AnnexADoubleFlag x);
void Delete_H223ModeChange(PS_H223ModeChange x);
void Delete_NewATMVCCommand(PS_NewATMVCCommand x);
void Delete_CmdReverseParameters(PS_CmdReverseParameters x);
void Delete_Multiplex(PS_Multiplex x);
void Delete_CmdMultiplex(PS_CmdMultiplex x);
void Delete_CmdAal(PS_CmdAal x);
void Delete_CmdAal5(PS_CmdAal5 x);
void Delete_CmdAal1(PS_CmdAal1 x);
void Delete_CmdErrorCorrection(PS_CmdErrorCorrection x);
void Delete_CmdClockRecovery(PS_CmdClockRecovery x);
void Delete_FunctionNotUnderstood(PS_FunctionNotUnderstood x);
void Delete_FunctionNotSupported(PS_FunctionNotSupported x);
void Delete_FnsCause(PS_FnsCause x);
void Delete_ConferenceIndication(PS_ConferenceIndication x);
void Delete_TerminalYouAreSeeingInSubPictureNumber(PS_TerminalYouAreSeeingInSubPictureNumber x);
void Delete_VideoIndicateCompose(PS_VideoIndicateCompose x);
void Delete_MiscellaneousIndication(PS_MiscellaneousIndication x);
void Delete_MiType(PS_MiType x);
void Delete_VideoNotDecodedMBs(PS_VideoNotDecodedMBs x);
void Delete_JitterIndication(PS_JitterIndication x);
void Delete_JiScope(PS_JiScope x);
void Delete_H223SkewIndication(PS_H223SkewIndication x);
void Delete_H2250MaximumSkewIndication(PS_H2250MaximumSkewIndication x);
void Delete_MCLocationIndication(PS_MCLocationIndication x);
void Delete_VendorIdentification(PS_VendorIdentification x);
void Delete_NewATMVCIndication(PS_NewATMVCIndication x);
void Delete_IndReverseParameters(PS_IndReverseParameters x);
void Delete_IrpMultiplex(PS_IrpMultiplex x);
void Delete_IndMultiplex(PS_IndMultiplex x);
void Delete_IndAal(PS_IndAal x);
void Delete_IndAal5(PS_IndAal5 x);
void Delete_IndAal1(PS_IndAal1 x);
void Delete_IndErrorCorrection(PS_IndErrorCorrection x);
void Delete_IndClockRecovery(PS_IndClockRecovery x);
void Delete_UserInputIndication(PS_UserInputIndication x);
void Delete_SignalUpdate(PS_SignalUpdate x);
void Delete_Rtp(PS_Rtp x);
void Delete_Signal(PS_Signal x);
void Delete_SignalRtp(PS_SignalRtp x);
void Delete_UserInputSupportIndication(PS_UserInputSupportIndication x);
void Delete_FlowControlIndication(PS_FlowControlIndication x);
void Delete_FciRestriction(PS_FciRestriction x);
void Delete_FciScope(PS_FciScope x);

#endif
