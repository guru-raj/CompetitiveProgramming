template <class T>
T mod_pow(T b, T e, T m) {
    assert(e >= T(0));
    assert(m > T(0));
    T res = T(1);
    while (e) {
        if (e & T(1)) res = mod(res * b, m);
        b = mod(b * b, m);
        e >>= T(1);
    }

    return res;
}
