//============================================================================
// Name        : HackerRank.java
// Author      : Tsotne Putkaradze, tsotnep@gmail.com
// Version     : 1.0
// Copyright   : very free to use
// Description : HackerRank.com problem solutions in Java
// Task        : https://www.hackerrank.com/challenges/game-of-thrones
// Submission  : https://www.hackerrank.com/challenges/game-of-thrones/submissions/code/17098673
//============================================================================

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.util.Scanner;

public class Solution {

	private static boolean isPowerOfTwo(Integer bm) {
		return ((bm & (bm-1)) == 0);
	}

	public static void main(String[] args) {
		Scanner inpReader = new Scanner(System.in);

		String in = inpReader.nextLine();
		int size = in.length();
		int bm = 0;
		for (int i = 0; i < size; i++) {
			int v = in.charAt(i) - 'a';
			bm = bm ^ (1 << v);
		}
		if ((size % 2 == 0) && (bm == 0))
			System.out.println("YES");
		else {
			if ((size % 2 == 1) && (isPowerOfTwo(bm)))
				System.out.println("YES");
			else
				System.out.println("NO");
		}
	}
}
