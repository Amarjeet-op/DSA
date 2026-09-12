
                vector<int> newIndex = indices[k][j - 1];
                newIndex.push_back(idx);
                sort(newIndex.begin(), newIndex.end());
                if (s1 == s2 && indices[i][j] < newIndex) {
                    newIndex = indices[i][j];
                }
                dp[i + 1][j] = s2;
                indices[i + 1][j] = newIndex;
            }
        }

        return indices[n][4];
    }
};
