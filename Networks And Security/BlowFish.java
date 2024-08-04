/*
 * OUTPUT : Encrypted Text +pf7S2q4OHpBv7sqXdXimg==
 */



import javax.crypto.*;
//import javax.crypto.KeyGenerator;
import javax.crypto.SecretKey;
import javax.crypto.spec.SecretKeySpec;
import java.util.Base64;

public class BlowFish {
	public static void main(String[] args) throws Exception {
		String plainText = "Hello World";
		String KeyString = "MySecretKey";
		SecretKey secretkey = new SecretKeySpec(KeyString.getBytes(), "Blowfish");

		Cipher cipher = Cipher.getInstance("Blowfish");
		cipher.init(Cipher.ENCRYPT_MODE, secretkey);

		byte[] encryptedText = cipher.doFinal(plainText.getBytes());

		String encryptedString = Base64.getEncoder().encodeToString(encryptedText);
		System.out.println("Encrypted Text " + encryptedString);
	}
}