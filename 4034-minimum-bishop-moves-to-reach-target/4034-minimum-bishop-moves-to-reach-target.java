class Solution {
    public int minBishopMoves(int[] source, int[] target) {
        return (source[0]+source[1])%2==(target[0]+target[1])%2?source[0]+source[1]==target[0]+target[1]?1:Math.abs(target[0]-source[0])==Math.abs(target[1]-source[1])?1:2:-1;
    }
}