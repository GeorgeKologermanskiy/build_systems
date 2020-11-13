#! /usr/bin/env python3
import sys

data = """
#include <algorithm>

namespace NA {
    int gcd(int a, int b) {
        while(b) {
            a %= b;
            std::swap(a, b);
        }
        return a;
    }
}
"""

out_file = sys.argv[1]
with open(out_file, "w") as fp:
    fp.write(data)
