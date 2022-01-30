class CanSenderScheduler {
private:
    CanServer& server_;

public:
//#ifndef TEST    
//    bool isTest_ = false;
//#else
//    bool isTest_ = true;
//#endif

    CanSenderScheduler(CanServer &myserver):server_:(myserver)
    {

    }

    bool sendData(const std::vector<unsigned char>  &data)
    {
        //CanServer *server;
        //if( isTest_ )
        //{
        //    server = new FakeCanServer(12);
        //} else 
        //{
        //    server = new CanServer(12);
        //}

        return server_->send(data);
    }
};

class CanServer
{
    public:
        CanServer(unsigned int address);
        bool send(const std::vector<unsigned char>  &data);
}
