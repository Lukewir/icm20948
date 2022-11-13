#include "Wire.h"



class TwoWire {
    public:
        TwoWire();
        void begin();
        void begin(uint8_t);
        void begin(int);
        void setClock(uint32_t);
        void setWireTimeout(uint32_t timeout = 25000, bool reset_with_timeout = false);
        void beginTransmission(int);
        uint8_t endTransmission(void);
        uint8_t endTransmission(uint8_t);
        uint8_t requestFrom(uint8_t, uint8_t);
        uint8_t requestFrom(int, int);
        virtual size_t write(uint8_t);
        virtual size_t write(const uint8_t *, size_t);
        virtual int read(void);

        

        inline size_t write(unsigned long n) { return write((uint8_t)n); }
        inline size_t write(long n) { return write((uint8_t)n); }
        inline size_t write(unsigned int n) { return write((uint8_t)n); }
        inline size_t write(int n) { return write((uint8_t)n); }

};

        