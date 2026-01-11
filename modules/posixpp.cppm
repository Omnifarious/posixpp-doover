module;

// Minimal named module interface for the runtime/toolchain component.
export module posixpp;

export namespace posixpp {
  struct version {
    static constexpr int major = 0;
    static constexpr int minor = 1;
  };

  export inline constexpr const char* abi_tag = "posixpp-runtime";
}
