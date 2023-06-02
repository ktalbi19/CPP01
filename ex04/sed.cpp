#include "sed.hpp"

Sed::Sed(std::string filename) : _inFile(filename){
    this->_outFile = _inFile + ".replace";
}

Sed::~Sed(){

}

void    Sed::replace(std::string s1, std::string s2){
    std::ifstream   ifs(this->_inFile);
    std::ofstream   ofs(this->_outFile);
    std::string     content;
    int             pos;

    if (ifs.is_open())
    {
        if (getline(ifs, content, '\0'))
        {
            pos = content.find(s1);
            while (pos != std::string::npos)
            {
                content.erase(pos, s1.length());
                content.insert(pos, s2);
                pos = content.find(s1);
            }
            ofs << content;
            ofs.close();
        }
        else
            std::cerr << "Empty file" << std::endl;
        ifs.close();
    }
    else
        std::cerr << "Can't open the file" << std::endl;
}
