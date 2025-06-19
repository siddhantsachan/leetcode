class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        // for and we need to have constant ones in all the numbers
        // i.e. bit patterns of all numbers need to be constant=> this implies that value of that part in all will be same
        // as we see leftmost bits change more frequently than righter bits 
        // so we will rightshift both left and right number until they become equal( that is their rightmost bit pattern matches)
        // but then the problem will arise that those numbers will be rightshifted means they will not be holding their original value
        // so we need to move them back into their original position
        // for that we need to maintain a counter

        int rightshifts=0;
        while(left!=right){
            left=(left>>1);
            right=(right>>1);
            rightshifts++;
        }
        return (left<<rightshifts);
    }
};