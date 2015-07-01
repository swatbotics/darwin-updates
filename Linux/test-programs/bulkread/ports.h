

#ifndef _PORTS_H_
#define _PORTS_H_

class Port {
  	private:
		int m_Socket_fd;
		char m_PortName[20]; 
		double m_ByteTransferTime;

	public:
		Port(const char* name);
		~Port();
		bool OpenPort();
		void ClosePort();
		void ClearPort();
		int WritePort(unsigned char* packet, int numPacket);
		int ReadPort(unsigned char* packet, int numPacket);

};

class BulkReadData {
    public:
        int start_address;
        int length;
        int error;
        unsigned char table[49]; //maxnum address = 49

        BulkReadData();
        ~BulkReadData();

        int ReadByte(int address);
        int ReadWord(int address);
        int MakeWord(int lowbyte, int highbyte);
};

#endif
