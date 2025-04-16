class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(int i=0;i<details.size();i++){
            string s = details[i];
            // Extract the age from positions 11 and 12
            int age = stoi(s.substr(11, 2));  // convert substring to int
            if (age > 60) {
                count++;
            }
        }
        return count;
    }
};
