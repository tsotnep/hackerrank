//============================================================================
// Name        : HackerRank.cpp
// Author      : Tsotne Putkaradze, tsotnep@gmail.com
// Version     : 1.0
// Copyright   : very free to use
// Description : HackerRank.com problem solutions in Java
// task        : https://www.hackerrank.com/challenges/two-strings
// Submission  : https://www.hackerrank.com/challenges/two-strings/submissions/code/15290271
//============================================================================
import java.io.*;

public class Solution {

	public static void main(String[] args) throws IOException {
		BufferedReader inpReader = new BufferedReader(new InputStreamReader(System.in));
		int t;
		String line = inpReader.readLine();
		t = Integer.parseInt(line);
		while (t != 0) {
			t--;
			String a, b, c;
			a = inpReader.readLine();
			b = inpReader.readLine();
			int la = a.length(), lb = b.length(), i;
			if (la > lb) {
				c = a;
				a = b;
				b = c;
			}
			int min = a.length();
			for (i = 0; i < min; i++) {
				if (b.indexOf((a.charAt(i))) >= 0)
					break;
			}

			System.out.println(((i == min) ? "NO" : "YES"));

		}

	}
}
