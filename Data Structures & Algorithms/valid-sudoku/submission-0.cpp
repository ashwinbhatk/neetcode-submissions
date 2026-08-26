class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int j = 0;
        int b_size = board.size();
        while (j < b_size) {
            unordered_set<int> s;
            for (int i = 0; i < b_size; i++) {
                int key = board[i][j];
                if (isdigit(key)) {
                    if (s.contains(key)) return false;
                    s.insert(key);
                }
            }
            j++;
        }
        j = 0;
        while (j < b_size) {
            unordered_set<int> s;
            for (int i = 0; i < b_size; i++) {
                int key = board[j][i];
                if (isdigit(key)) {
                    if (s.contains(key)) return false;
                    s.insert(key);
                }
            }
            j++;
        }
        int x = 3, y = 3;

        for (int x = 0; x < b_size; x += 3) {
            for (int y = 0; y < b_size; y += 3) {
                unordered_set<int> s;

                for (int i = x; i < x + 3; i++) {
                    for (int j = y; j < y + 3; j++) {
                        int key = board[i][j];

                        if (isdigit(key)) {
                            if (s.contains(key)) return false;
                            s.insert(key);
                        }
                    }
                }
            }
        }

        return true;
    }
};
