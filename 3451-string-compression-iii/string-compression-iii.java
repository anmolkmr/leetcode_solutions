class Solution {
    public String compressedString(String word) {
        StringBuilder sb = new StringBuilder();
        char prevChar = word.charAt(0);
        int prevCharCount = 1;

        for (int i = 1; i < word.length(); i++) {
            if (prevChar == word.charAt(i)) {
                prevCharCount++;
                if (prevCharCount == 9) {
                    sb.append(String.valueOf(prevCharCount));
                    sb.append(String.valueOf(prevChar));
                    prevCharCount = 0;
                }
            } else {
                if (prevCharCount > 0) {
                    sb.append(String.valueOf(prevCharCount));
                    sb.append(String.valueOf(prevChar));
                }
                prevCharCount = 1;
                prevChar = word.charAt(i);
            }
        }

        if (prevCharCount > 0) {
            sb.append(String.valueOf(prevCharCount));
            sb.append(String.valueOf(prevChar));
        }

        return sb.toString();

    }
}