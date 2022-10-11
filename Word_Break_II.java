// Leetcodelink - https://leetcode.com/problems/word-break-ii/

class Solution {

    int[] exists;
    Trie root;
    
    public void search(List<String> ans, Trie curr, StringBuilder temp, char[] given, int index){
        if(index==given.length){
            return;
        } 
        if(curr.children[given[index]-'a'] == null)return;
        
        Trie next = curr.children[given[index] - 'a'];
        temp.append(given[index]);
        
        //If the word is present in the dictionary, we can either add a space or we continue going down in the trie
        if(next.isWord){
            //If we have reached the end of the string, add the value to Answer and terminate
            if(index+1 == given.length){
                ans.add(temp.toString());
                temp.deleteCharAt(temp.length()-1); 
                return;
                }
            else{
                //We are adding space
                temp.append(" ");
                //Since after adding space, the next letter should be the beginning of a new word from the dictionary, we pass in the ROOT trie node
                search(ans, root, temp, given, index+1);
                //remove the space we added in the above line.
                temp.deleteCharAt(temp.length()-1);      
            }
        }
        
        //since we have not added a space, we are technically going down in the same trie block. So we are moving the NEXT node in the CURR trie node.
        search(ans, next, temp, given, index+1);
            
        //Deleting the added character
        temp.deleteCharAt(temp.length()-1);            

    }
    
    
    public List<String> wordBreak(String s, List<String> wordDict) {
        root = new Trie();
        exists = new int[26];
        List<String> ans = new ArrayList();
        for(String word : wordDict){
            root.addWord(word);
        }
        
        for(char c : s.toCharArray()){
            if(exists[c-'a']!=1)
                return new ArrayList();
        }
        search(ans, root, new StringBuilder(), s.toCharArray(), 0);
        return ans;
    }

    
    class Trie{
        boolean isWord;
        Trie[] children;
        Trie(){
            isWord=false;
            children = new Trie[26];
        }
        public void addWord(String w){
            Trie curr = this;
            int index = 0;
            char[] word = w.toCharArray();
            while(index<word.length){   
                exists[word[index]-'a']=1;
                if(curr.children[word[index]-'a'] == null){
                    curr.children[word[index]-'a'] = new Trie();
                }  
                curr = curr.children[word[index]-'a'];
                index++;
            }
            curr.isWord = true;
        }
        
    }
}