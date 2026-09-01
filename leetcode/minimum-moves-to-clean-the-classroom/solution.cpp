
                if (nx < 0 || nx >= m || ny < 0 || ny >= n ||
                    classroom[nx][ny] == 'X') {
                    continue;
                }

                int ne = classroom[nx][ny] == 'R' ? energy : t.e - 1;
                int nmask = t.mask | id[nx][ny];

                if (ne > bestEnergy[nx][ny][nmask]) {
                    bestEnergy[nx][ny][nmask] = ne;
                    q.push({nx, ny, nmask, ne, t.steps + 1});
                }
            }
        }
        return -1;
    }
};
