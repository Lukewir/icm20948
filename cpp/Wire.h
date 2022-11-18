#ifndef TwoWire_h
#define TwoWire_h
#include <cstdint>

void pinMode(void);
void digitalWrite(void);
void sleepytime(int8_t);
class TwoWire
{
    private:
        static uint8_t rxBuffer[];
        static uint8_t rxBufferIndex;
        static uint8_t rxBufferLength;

        static uint8_t txAddress;
        static uint8_t txBuffer[];
        static uint8_t txBufferIndex;
        static uint8_t txBufferLength;

        static uint8_t transmitting;
        static void (*user_onRequest)(void);
        static void (*user_onReceive)(int);
        static void onRequestService(void);
        static void onReceiveService(uint8_t*, int);
    public:
        TwoWire();
        void begin();
        void begin(uint8_t);
        void begin(int);
        //void end();
        void setClock(uint32_t);
        void setWireTimeout(uint32_t timeout = 25000, bool reset_with_timeout = false);
        //bool getWireTimeoutFlag(void);
        //void clearWireTimeoutFlag(void);
        //void beginTransmission(uint8_t);
        void beginTransmission(int);
        uint8_t endTransmission(void);
        uint8_t endTransmission(uint8_t);
        uint8_t requestFrom(uint8_t, uint8_t);
        // uint8_t requestFrom(uint8_t, uint8_t, uint8_t);
        // uint8_t requestFrom(uint8_t, uint8_t, uint32_t, uint8_t, uint8_t);
        uint8_t requestFrom(int, int);
        // uint8_t requestFrom(int, int, int);
        virtual size_t write(uint8_t);
        virtual size_t write(const uint8_t *, size_t);
        // virtual int available(void);
        virtual int read(void);
        // virtual int peek(void);
        // virtual void flush(void);
        // void onReceive( void (*)(int) );
        // void onRequest( void (*)(void) );

        

        inline size_t write(unsigned long n) { return write((uint8_t)n); }
        inline size_t write(long n) { return write((uint8_t)n); }
        inline size_t write(unsigned int n) { return write((uint8_t)n); }
        inline size_t write(int n) { return write((uint8_t)n); }
        
};
// class Wire{
//     private:
//     public:
//     Wire();
//     void begin();
//     void beginTransmission(char);
//     void write(char);
//     void write(char, uint8_t);
//     void endTransmission();
// };
#endif
