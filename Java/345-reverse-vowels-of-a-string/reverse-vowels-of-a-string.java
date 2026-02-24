class Solution {
    public String reverseVowels(String s) {
        char[] arr=s.toCharArray();
        int a=0,b=arr.length-1;
        while(a<b){
            if(isVowel(arr[a]) && isVowel(arr[b])){
                char temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
                a++;
                b--;
            }else if(!isVowel(arr[a])){
                a++;
            }else{
                b--;
            }
        }
        return new String(arr);
    }
    public boolean isVowel(char y){
        if(y == 'a' || y == 'e' || y == 'i' || y == 'o'
            || y == 'u' || y == 'A' || y == 'E' || y == 'I'
            || y == 'O' || y == 'U'){
                return true;
            }
        return false;
    }
}