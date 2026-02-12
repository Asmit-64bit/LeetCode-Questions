class Solution {
    public String interpret(String command) {
        StringBuilder S1 = new StringBuilder();

        for(int i = 0; i < command.length(); i++)
        {
            char ch = command.charAt(i);

            if(ch == 'G')
            {
                S1.append('G');
            }
            else if(ch == '(' && command.charAt(i+1) == ')')
            {
                S1.append('o');
                i++;
            }
            else
            {
                S1.append("al");
                i = i + 3;
            }
        }
        return S1.toString();
    }
}
