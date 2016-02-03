	//============================================================================
	// Name        : Solution.java
	// Author      : Tsotne Putkaradze, tsotnep@gmail.com
	// Version     : 1.0
	// Copyright   : very free to use
	// Description : HackerRank.com problem solutions in Java
	// Task        : https://www.hackerrank.com/challenges/make-it-anagram
	// Submission  : https://www.hackerrank.com/challenges/make-it-anagram/submissions/code/17099795
	//============================================================================
	
	import java.util.Scanner;
	
	public class Solution {
	
		public static void main(String[] args) {
			Scanner inpReader = new Scanner(System.in);
	
			String a = inpReader.nextLine();
			String b = inpReader.nextLine();
			int sa = a.length();
			int sb = b.length();
			
			int[] fa = new int[26];
			int[] fb = new int[26];
			
			int pos = 0;
			for (int i=0; i<sa;i++){
				pos = a.charAt(i) - 'a';
				fa[pos]++;
			}
			for (int i=0; i<sb;i++){
				pos = b.charAt(i) - 'a';
				fb[pos]++;
			}
			int ans = 0;
			for (int i=0;i<26;i++){
				ans += Math.abs(fa[i]-fb[i]);			
			}
			System.out.println(ans);
		}
	}
