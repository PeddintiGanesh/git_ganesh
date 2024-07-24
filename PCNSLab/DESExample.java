
/*
 * OUTPUT :  Enter the message to encrypt: ganesh
             Enter the secret key (8 characters): ganesh12
             Encrypted message: aZACTbJS+Qs=
             Decrypted message: ganesh
 */


import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import java.util.Base64;
import java.util.Scanner;

public class DESExample {

    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the message to encrypt: ");
        String originalMessage = scanner.nextLine();

        System.out.print("Enter the secret key (8 characters): ");
        String secretKey = scanner.nextLine();

        // Encrypt the message
        String encryptedMessage = encrypt(originalMessage, secretKey);
        System.out.println("Encrypted message: " + encryptedMessage);

        // Decrypt the message
        String decryptedMessage = decrypt(encryptedMessage, secretKey);
        System.out.println("Decrypted message: " + decryptedMessage);

        scanner.close();
    }

    public static String encrypt(String message, String secretKey) throws Exception {
        DESKeySpec desKeySpec = new DESKeySpec(secretKey.getBytes());
        SecretKeyFactory keyFactory = SecretKeyFactory.getInstance("DES");
        SecretKey key = keyFactory.generateSecret(desKeySpec);

        Cipher cipher = Cipher.getInstance("DES/ECB/PKCS5Padding");
        cipher.init(Cipher.ENCRYPT_MODE, key);

        byte[] encryptedBytes = cipher.doFinal(message.getBytes());

        return Base64.getEncoder().encodeToString(encryptedBytes);
    }

    public static String decrypt(String encryptedMessage, String secretKey) throws Exception {
        DESKeySpec desKeySpec = new DESKeySpec(secretKey.getBytes());
        SecretKeyFactory keyFactory = SecretKeyFactory.getInstance("DES");
        SecretKey key = keyFactory.generateSecret(desKeySpec);

        Cipher cipher = Cipher.getInstance("DES/ECB/PKCS5Padding");
        cipher.init(Cipher.DECRYPT_MODE, key);

        byte[] decryptedBytes = cipher.doFinal(Base64.getDecoder().decode(encryptedMessage));

        return new String(decryptedBytes);
    }
}
