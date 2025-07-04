class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        if (k == 1) return 'a';  // Base case

        long long len = 1;       // Initial length of string
        int n = operations.size();
        int opType = 0;          // Operation that leads to k-th char
        long long newK = 0;      // Index in the previous string

        // Find the point where k falls into the newly appended segment
        for (int i = 0; i < n; i++) {
            len *= 2;
            if (len >= k) {
                opType = operations[i];
                newK = k - len / 2;
                // Reduce operations to size i for future recursive calls
                operations.resize(i);
                break;
            }
        }

        char prevChar = kthCharacter(newK, operations);

        if (opType == 0) {
            return prevChar;
        } else {
            return prevChar == 'z' ? 'a' : prevChar + 1;
        }
    }
};
