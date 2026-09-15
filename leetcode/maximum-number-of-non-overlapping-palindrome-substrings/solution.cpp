                ++ans;
                start = r + 1;
                continue;
            }

            l = r - k;
            if (l >= start && check(l, r)) {
                ++ans;
                start = r + 1;
            }
        }

        return ans;
    }
};
