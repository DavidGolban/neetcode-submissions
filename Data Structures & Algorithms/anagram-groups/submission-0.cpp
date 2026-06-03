class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // map in care stochez frecventa sub forma unui string
        // nu se poate cu vectorul de frecventa caci nu e imutabil
        unordered_map<string, vector<string>> map;
        for (string s : strs) {
            vector<int> f(26, 0);
            for (char c : s) f[c - 'a']++;
            // crearea "stringului de frecventa"
            string fr = to_string(f[0]);
            for (int b : f)
                fr +=
                    '.' +
                    to_string(b);  // separat cu punct pentru a deosebi a = 1 b = 11 de a = 11 b = 1
            map[fr].push_back(s);
        }
        vector<vector<string>> rez;
        for (auto pair : map)  // parcurg fiecare pereche din map si adaug vectorul de stringuri in
                               // vectorul cerut
            rez.push_back(pair.second);
        return rez;
    }
};