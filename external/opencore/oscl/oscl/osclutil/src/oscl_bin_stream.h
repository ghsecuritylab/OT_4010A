
// -*- c++ -*-
// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =

//                 O S C L _ B I N _ S T R E A M

// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =





#ifndef OSCL_BIN_STREAM_H_INCLUDED
#define OSCL_BIN_STREAM_H_INCLUDED

#ifndef OSCL_BASE_H_INCLUDED
#include "oscl_base.h"
#endif




class OsclBinStream
{
    public:
        OsclBinStream()
                : state(GOOD_STATE),
                pBasePosition(0),
                pPosition(0)
        {
        }

        //! This method determines if the stream is ok.
        /*!
           \return true if stream is ok.
        */
        bool good();

        //! This method determines if end of stream has been reached
        /*!
            \return true if end of stream has been reached.
        */
        bool eof();

        //! This method determines if an error has occured in the stream
        /*!
        ** \return true if an error occured in the stream.
        */
        bool fail();


        //! This methods specifies the data buffer to attach to the stream.
        /*!
            \param buffer will provide the input
            \param length of the buffer
        */
        void Attach(void * buffer, uint32 l_length);

        //! This method specifies the memory fragment array to use for input.
        /*!
             This array should remain static while the stream refers to it.
             \param numFragments is the number of elements in the array
             \param fragPtr is the pointer to the MemoryFragment array
        */
        void Attach(const uint32 numFragments, const OsclMemoryFragment * fragPtr);


        //! This method returns the current stream position
        /*!
           This method is to be used if the input stream is a pointer to the MemoryFragment array
        ** \return Stream position.
        */
        uint32 tellg();

        //! This method seeks to the specified stream position.
        /*!
           \return Stream position.
        */
        void Seek(uint32 absPosition);

        //! This method returns the current stream position.
        /*!
           \returns stream position.
        */
        uint32 PositionInBlock();


        //! This method seeks to the specified offset from the current location
        /*!
            \param offset from current stream location
        */
        void seekFromCurrentPosition(int32 offset);



    protected:

        /*
        ** Description:
        **      Reserves space for storing/reading. If no space is available it sets the stream state
        **      to fail and returns false. If the end of the stream has been reached, it sets the state
        **      to end of stream.
        **
        ** Returns: true if space was successfully reserved.
        ** Side effects: None.
        */
        bool ReserveSpace(uint32 size);

        bool HaveRoomInCurrentBlock(uint32 size);

        typedef enum
        {
            GOOD_STATE,
            EOF_STATE,
            FAIL_STATE
        } state_t;

        state_t state;

        /* Position of the beginning of the data buffer */
        uint8 * pBasePosition;

        /* Current data buffer position */
        uint8 * pPosition;

        /* length of data buffer */
        uint32            length;

        const OsclMemoryFragment *  nextFragPtr;
        int               fragsLeft;

        const OsclMemoryFragment *  firstFragPtr;
        int               numFrags;
        OsclMemoryFragment   specialFragBuffer;

};

class OsclBinIStream : public OsclBinStream
{
    private:
    public:
        /*
        ** Description:
        **      Constructor.
        **
        ** Returns: None.
        ** Side effects: None.
        */
        OsclBinIStream()
        {
        }

        /*
        ** Description:
        **      Destructor.
        **
        ** Returns: None.
        ** Side effects: None.
        */
        ~OsclBinIStream()
        {
        }

        //! This method reads an unsigned short from the stream.
        /*!
        ** \returns Unsigned short read from the stream.
        */
        uint8 Read_uint8();

        //! This method reads 'length' number of bytes from the stream and places them in 'data'.
        /*!
            \param data is a pointer to the place to store the bytes read
            \param size is the number of bytes to read
        */
        OsclBinIStream & get(
            int8 * data,
            int32 size
        );

    protected:


};

class OsclBinIStreamLittleEndian : public OsclBinIStream
{
    public:
        OsclBinIStreamLittleEndian()
        {
        }

        //! This method reads a int8 from the stream and stores it in 'data'.
        OsclBinIStreamLittleEndian & operator>>(int8 & data);

        //!This method reads a uint8 from the stream and stores it in 'data'.
        OsclBinIStreamLittleEndian & operator>>(uint8 & data);

        //! This method reads a int16 from the stream and stores it in 'data'.
        OsclBinIStreamLittleEndian & operator>>(int16 & data);

        //! This method reads a uint16 from the stream and stores it in 'data'.
        OsclBinIStreamLittleEndian & operator>>(uint16 & data);

        //! This method reads a int32 from the stream and stores it in 'data'.
        OsclBinIStreamLittleEndian & operator>>(int32 & data);

        //! This method reads a uint32 from the stream and stores it in 'data'.
        OsclBinIStreamLittleEndian & operator>>(uint32 & data);

    protected:

        /*
        ** Description:
        **      Reads an unsigned short from the stream.
        **
        ** Returns: Unsigned short read from the stream.
        ** Side effects: None.
        */
        uint16 Read_uint16();
        /*
        ** Description:
        **      Reads an unsigned long from the stream.
        **
        ** Returns: Unsigned long read from the stream.
        ** Side effects: None.
        */
        uint32 Read_uint32();
};


class OsclBinIStreamBigEndian : public OsclBinIStream
{
    public:
        OsclBinIStreamBigEndian()
        {
        }

        void Read(int8 & data);

        void Read(uint8 & data);

        void Read(int16 & data);

        void Read(uint16 & data);

        void Read(int32 & data);

        void Read(uint32 & data);

        //! This method reads a int8 from the stream and stores it in 'data'.
        OsclBinIStreamBigEndian & operator>>(int8 & data);

        //! This method reads a uint8 from the stream and stores it in 'data'.
        OsclBinIStream & operator>>(uint8 & data);

        //! This method reads a int16 from the stream and stores it in 'data'.
        OsclBinIStreamBigEndian & operator>>(int16 & data);

        //! This method reads a uint16 from the stream and stores it in 'data'.
        OsclBinIStreamBigEndian & operator>>(uint16 & data);

        //! This method reads a int32 from the stream and stores it in 'data'.
        OsclBinIStreamBigEndian & operator>>(int32 & data);

        //! This method reads a uint32 from the stream and stores it in 'data'.
        OsclBinIStreamBigEndian & operator>>(uint32 & data);

        //! This method reads an unsigned short from the stream.
        /*!
          \return Unsigned short read from the stream.
        */
        uint16 Read_uint16();

        //! This method reads an unsigned long from the stream.
        /*!
          \return unsigned long read from the stream.
        */
        uint32 Read_uint32();
    protected:

};


//! Class OsclBinOStream implements the basic stream functions for an output stream.
class OsclBinOStream : public OsclBinStream
{
    public:
        OsclBinOStream()
        {
        }

        virtual ~OsclBinOStream()
        {
        }

        //! This method writes 'length' number of bytes stored in 'data' to the stream.
        OsclBinOStream & write(
            const int8 * data,      /* data to store */
            int32 size      /* length of data to store */
        );

    protected:
};

//! Class OsclBinOStreamLittleEndian implements a binary output stream using little endian byte ordering
class OsclBinOStreamLittleEndian : public OsclBinOStream
{
    public:
        OsclBinOStreamLittleEndian()
        {
        }

        //! This method writes a int8 from 'data' to the stream.
        OsclBinOStreamLittleEndian & operator<<(const int8 & data);

        //!This method writes a uint8 from 'data' to the stream.
        OsclBinOStreamLittleEndian & operator<<(const uint8 & data);

        //! This method writes a int16 from 'data' to the stream.
        OsclBinOStreamLittleEndian & operator<<(const int16 & data);

        //! This method writes a uint16 from 'data' to the stream.
        OsclBinOStreamLittleEndian & operator<<(const uint16 & data);

        //! This method writes a int32 from 'data' to the stream.
        OsclBinOStreamLittleEndian & operator<<(const int32 & data);

        //! This method writes a uint32 from 'data' to the stream.
        OsclBinOStreamLittleEndian & operator<<(const uint32 & data);

    protected:

        //! This method writes 'data' (unsigned short) to the stream.
        void WriteUnsignedShort(const uint16 data);

        //! This method writes 'data' (unsigned long) to the stream.
        void WriteUnsignedLong(const uint32 data);

};


//! Class OsclBinOStreamBigEndian implements a binary output stream using big endian byte ordering
class OsclBinOStreamBigEndian : public OsclBinOStream
{
    public:
        OsclBinOStreamBigEndian()
        {
        }

        //! This method writes a int8 from 'data' to the stream.
        OsclBinOStreamBigEndian & operator<<(const int8 & data);

        //! This method writes a uint8 from 'data' to the stream.
        OsclBinOStreamBigEndian & operator<<(const uint8 & data);

        //! This method writes a int16 from 'data' to the stream.
        OsclBinOStreamBigEndian & operator<<(const int16 & data);

        //! This method writes a uint16 from 'data' to the stream.
        OsclBinOStreamBigEndian & operator<<(const uint16 & data);

        //! This method writes a int32 from 'data' to the stream.
        OsclBinOStreamBigEndian & operator<<(const int32 & data);

        //! This method writes a uint32 from 'data' to the stream.
        OsclBinOStreamBigEndian & operator<<(const uint32 & data);

    protected:

        /*
        ** Description:
        **      Writes 'data' (unsigned short) to the stream.
        **
        ** Returns: None.
        ** Side effects: None.
        */
        void WriteUnsignedShort(const uint16 data);

        /*
        ** Description:
        **      Writes 'data' (unsigned long) to the stream.
        **
        ** Returns: None.
        ** Side effects: None.
        */
        void WriteUnsignedLong(const uint32 data);
};

#if (!OSCL_DISABLE_INLINES)
#include "oscl_bin_stream.inl"
#endif

#endif

/*! @} */
