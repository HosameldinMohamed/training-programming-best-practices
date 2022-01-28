
class CanSenderScheduler {
  public:
#ifndef TEST    
    bool isTest_ = false;
#else
    bool isTest_ = true;
#endif

    bool sendData(const std::vector<unsigned char>  &data);

};
