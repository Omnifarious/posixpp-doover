import posixpp;

namespace posixpp {
  int runtime_sanity_check() {
    return version::major * 100 + version::minor;
  }
}
