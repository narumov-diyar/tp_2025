#ifndef IO_FMT_GUARD_HPP
#define IO_FMT_GUARD_HPP

#include <iostream>

namespace nspace {

class iofmtguard {
public:
    iofmtguard(std::basic_ios<char>& s);
    ~iofmtguard();
private:
    std::basic_ios<char>&            s_;
    std::streamsize                  width_;
    char                             fill_;
    std::streamsize                  precision_;
    std::basic_ios<char>::fmtflags   flags_;
};

}

#endif
