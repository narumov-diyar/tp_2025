#ifndef IOFMTGUARD_HPP
#define IOFMTGUARD_HPP
#include <iostream>

namespace evdokimov {
class iofmtguard {
public:
  explicit iofmtguard(std::basic_ios<char> &s);
  iofmtguard(const iofmtguard &other) = delete;
  iofmtguard(iofmtguard &&other) noexcept = delete;
  iofmtguard &operator=(const iofmtguard &other) = delete;
  iofmtguard &operator=(iofmtguard &&other) noexcept = delete;
  ~iofmtguard();

private:
  std::basic_ios<char> &s_;
  std::streamsize width_;
  char fill_;
  std::streamsize precision_;
  std::basic_ios<char>::fmtflags fmt_;
};
} // namespace evdokimov
#endif
