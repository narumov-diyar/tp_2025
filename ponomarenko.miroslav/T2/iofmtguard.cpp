#include "iofmtguard.hpp"

namespace ponomarenko {

    iofmtguard::iofmtguard(std::basic_ios<char>& stream)
        : stream_(stream),
        fill_(stream.fill()),
        precision_(stream.precision()),
        flags_(stream.flags()) {}

    iofmtguard::~iofmtguard() {
        stream_.fill(fill_);
        stream_.precision(precision_);
        stream_.flags(flags_);
    }

}
