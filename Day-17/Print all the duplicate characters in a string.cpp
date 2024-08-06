    string removeDuplicates(std::string str) {
    unordered_set<char> seen;
    stack<char> st;
    
    for (char ch : str) {
        // If the character is not in the set, it's not a duplicate
        if (seen.find(ch) == seen.end()) {
            st.push(ch);
            seen.insert(ch); // Mark this character as seen
        }
    }
    
    string ans = "";
    while (!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }
    
    return ans;
}
