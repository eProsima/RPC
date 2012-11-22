/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef SimpleDelay_TYPES_TCC
#define SimpleDelay_TYPES_TCC

#include "SimpleDelay_types.h"



template <class Protocol_>
uint32_t Estructura::read(Protocol_* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->valor1);
          this->__isset.valor1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->valor2);
          this->__isset.valor2 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->valor3);
          this->__isset.valor3 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t Estructura::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Estructura");

  xfer += oprot->writeFieldBegin("valor1", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->valor1);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("valor2", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->valor2);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("valor3", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->valor3);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}



#endif
