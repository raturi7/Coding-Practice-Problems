// using break statement with help of label:
package class_Ques;

public class LabelExample {

	public static void main(String[] args) {
		label1:
		for(int i=0;i<5;i++) {
			System.out.println("1st");
			label2:
			for(int j=0;j<3;j++) {
				System.out.println("2nd");
				if(i==2&&j==1) {
					System.out.println("breaking");
					break label1;
				}
			}
			
		}

	}

}
