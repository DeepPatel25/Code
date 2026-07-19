class Solution {
    public String shortestSuperstring(String[] words) {
        Map<String, String> map = new HashMap<>();
        int state = 0;
        for (int i = 0; i < words.length; i++) {
            state |= 1 << i;
        }

        return shortestSuperString(words, "", state, map);
    }

    private String shortestSuperString(String[] words, String startWord, int state, Map<String, String> map) {
        if (state == 0)
            return startWord;
        
        String key = startWord + "|" + state;
        if (map.containsKey(key)) {
            return map.get(key);
        }

        String shortesSs = null;
        for (int i = 0; i < words.length; ++i) {
            if (!isConsumed(state, i)) {
                String superString = shortestSuperString(words, words[i], consume(state, i), map);

                String appended = overlapShortedtString(startWord, superString);

                if (shortesSs == null || appended.length() < shortesSs.length()) {
                    shortesSs = appended;
                }
            }
        }

        map.put(key, shortesSs);
        return shortesSs;
    }

    private boolean isConsumed(int state, int i) {
        return ((state >> i) & 1) == 0;
    }

    private int consume(int state, int i) {
        return state & ~(1 << i);
    }

    private String overlapShortedtString(String a, String b) {
        for (int i = Math.max(1, a.length() - b.length()); i < a.length(); i++) {
            boolean match = true;
            for (int j = i; j < a.length(); j++) {
                if (a.charAt(j) != b.charAt(j - i)) {
                    match = false;
                    break;
                }
            }

            if (match) {
                return a.substring(0, i) + b;
            }
        }

        return a + b;
    }
}