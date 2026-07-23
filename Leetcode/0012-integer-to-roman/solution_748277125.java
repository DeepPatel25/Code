class Solution {
    public String intToRoman(int nums) {
        String ans = "";
        while(nums!=0){
            if(nums>=1000){
                ans+="M";
                nums-=1000;
            }else if(nums>=900){
                ans+="CM";
                nums-=900;
            }else if(nums>=500){
                ans+="D";
                nums-=500;
            }else if(nums>=400){
                ans+="CD";
                nums-=400;
            }else if(nums>=100){
                ans+="C";
                nums-=100;
            }else if(nums>=90){
                ans+="XC";
                nums-=90;
            }else if(nums>=50){
                ans+="L";
                nums-=50;
            }else if(nums>=40){
                ans+="XL";
                nums-=40;
            }else if(nums>=10){
                ans+="X";
                nums-=10;
            }else if(nums>=9){
                ans+="IX";
                nums-=9;
            }else if(nums>=5){
                ans+="V";
                nums-=5;
            }else if(nums>=4){
                ans+="IV";
                nums-=4;
            }else{
                ans+="I";
                nums-=1;
            }
        }
        return ans;
    }
}