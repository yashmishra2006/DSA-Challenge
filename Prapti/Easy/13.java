class Solution {
    public int romanToInt(String s) {
        int c = 0;

        for (int i = 0; i < s.length(); i++) {
            char curr = s.charAt(i);

            if (curr == 'I') {
                c += 1;
            } else if (curr == 'V') {
                c += 5;
                if (i > 0 && s.charAt(i-1) == 'I')
                c -= 2;
            } else if (curr == 'X') {
                c += 10;
                if (i > 0 && s.charAt(i-1) == 'I')
                c -= 2;
            } else if (curr == 'L') {
                c += 50;
                if (i > 0 && s.charAt(i-1) == 'X')
                c -= 20;
            } else if (curr == 'C') {
                c += 100;
                if (i > 0 && s.charAt(i-1) == 'X')
                c -= 20;
            } else if (curr == 'D') {
                c += 500;
                if (i > 0 && s.charAt(i-1) == 'C')
                c -= 200;
            } else if (curr == 'M') {
                c += 1000;
                if (i > 0 && s.charAt(i-1) == 'C')
                c -= 200;
            }
        }

        return c;
    }
}