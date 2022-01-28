
class CanServer
{
    public:
        CanServer(unsigned int address);
        bool send(const std::vector<unsigned char>  &data);
}
