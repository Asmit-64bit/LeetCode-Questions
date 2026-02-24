class Solution {
    public String defangIPaddr(String address) {
        StringBuilder ans = new StringBuilder();
        for(char x: address.toCharArray()){
            if(x == '.') ans.append("[.]");
            else ans.append(x);
        }
        return ans.toString();
    }
}