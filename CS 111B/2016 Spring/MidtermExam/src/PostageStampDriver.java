/**
 * Created by alanmartinez on 3/23/16.
 */
public class PostageStampDriver {

    public static void main(String[] args){

        PostageStamp currentStamps[] = new PostageStamp[3];

        currentStamps[0].setCost(0.10);
        currentStamps[0].setDescription("U.S. Flag");

        currentStamps[1].setCost(0.25);
        currentStamps[1].setDescription("President Washington");

        currentStamps[2].setCost(1.00);
        currentStamps[2].setDescription("President Obama");

        

    }
}
