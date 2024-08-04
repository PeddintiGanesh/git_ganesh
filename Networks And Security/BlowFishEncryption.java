/*
 * OUTPUT : Encrypted text: 8MFk7/CbpogTGeRxjtVkeQ==
 */


import javax.crypto.Cipher;
import javax.crypto.KeyGenerator;
import javax.crypto.SecretKey;
import javax.crypto.spec.SecretKeySpec;
//import java.security.SecureRandom;
import java.util.Base64;

public class BlowFishEncryption {

    public static void main(String[] args) throws Exception {
        // Generate a secret key for BlowFish
        KeyGenerator keyGen = KeyGenerator.getInstance("Blowfish");
        keyGen.init(128); // 128-bit key
        SecretKey secretKey = keyGen.generateKey();

        // Convert the secret key to a byte array
        byte[] keyBytes = secretKey.getEncoded();

        // Create a SecretKeySpec from the byte array
        SecretKeySpec secretKeySpec = new SecretKeySpec(keyBytes, "Blowfish");

        // Create a Cipher instance for BlowFish encryption
        Cipher cipher = Cipher.getInstance("Blowfish");
        cipher.init(Cipher.ENCRYPT_MODE, secretKeySpec);

        // Encrypt the text "Hello world"
        String plainText = "Hello world";
        byte[] plainBytes = plainText.getBytes("UTF-8");
        byte[] encryptedBytes = cipher.doFinal(plainBytes);

        // Convert the encrypted bytes to a Base64-encoded string
        String encryptedText = Base64.getEncoder().encodeToString(encryptedBytes);

        System.out.println("Encrypted text: " + encryptedText);
    }
}


/*
 * OUTPUT : Encrypted text: 8MFk7/CbpogTGeRxjtVkeQ==
 */