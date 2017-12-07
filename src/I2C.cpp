#include "I2C.h"

namespace i2c{
  I2C::I2C(int I2c_chip_address){
    this->I2c_chip_address = I2c_chip_address;
    this->filename = "/dev/i2c-1";
    this->file = open(this->filename.c_str(),O_RDWR);
    ioctl(this->file,I2C_SLAVE,this->I2c_chip_address);
  }

  bool I2C::consult(char buffer[],int length){
        if (read(file,buffer,length) != length) {
            return false;
        }else{
            return true;
        }
  }

  bool I2C::compose(char buffer[],int length){
    if (write(file,buffer,length) != length) {
        return false;
    }else{
        return true;
    }
  }
}
