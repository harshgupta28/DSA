import java.util.HashMap;
import java.util.Map;

public class Trie
{
	 private class TrieNode
	 {
	 	Map<Character, TrieNode> children;
	 	boolean endOfWord;
	 	public TrieNode()
	 	{
	 		children = new HashMap<Character, TrieNode>() ;
	 		endOfWord = false ;
	 	}
	 	
	 }
	 
	 private final TrieNode root ;
	 
	 public Trie()
	 {
		 root = new TrieNode();
	 }
	 
	 public void insert(String word)
	 {
		 TrieNode current = root;
		 for(int i=0;i<word.length();i++)
		 {
			 char ch = word.charAt(i);
			 TrieNode node = current.children.get(ch);
			 if(node == null)
			 {
				 node = new TrieNode();
				 current.children.put(ch, node);
			 }
			 
			 current = node ;
		 }
		 
		 current.endOfWord = true;
	 }
	 
	 public boolean search(String word)
	 {
		 TrieNode current = root;
		 for(int i=0;i<word.length();i++)
		 {
			 char ch = word.charAt(i);
			 TrieNode node = current.children.get(ch);
			 if(node == null)
				 return false;	
			 
			 current = node ;
		 }
		 
		 return current.endOfWord ;
	 }
	 
	 public void delete (String word)
	 {
		 TrieNode current = root;
		 for(int i=0;i<word.length();i++)
		 {
			 char ch = word.charAt(i);
			 TrieNode node = current.children.get(ch);
			 if(node == null)
				 return ;	
			 
			 current = node ;
		 }
		 
		 current.endOfWord = false ;
	 }
	 
	 
	 public static void main(String[] args) 
	 {
		Trie trie = new Trie();
		
		trie.insert("abcd");
		trie.insert("lmn");
		trie.insert("abcderg");
		
		System.out.println(trie.search("abcd"));
		System.out.println(trie.search("abc"));
		System.out.println(trie.search("lmn"));
		System.out.println(trie.search("abcderg"));
		
		trie.delete("abcderg");
		System.out.println(trie.search("abcderg"));		
		
	 }
	 
}

