/*
 * Cipher Text : 1231204398828912211  
 * Decrypted message: 1234567890
 */


import java.math.BigInteger;
import java.security.SecureRandom;
import java.util.Random;

public class Elgamal {
    private BigInteger p; // large prime number
    private BigInteger g; // generator
    private BigInteger x; // private key
    private BigInteger y; // public key
    private Random random; // secure random number generator

    public Elgamal(int bitLength) {
        random = new SecureRandom();
        p = new BigInteger(bitLength, 100, random); // generate a large prime number
        g = new BigInteger("2"); // generator is 2
        x = new BigInteger(bitLength, random); // generate private key
        y = g.modPow(x, p); // compute public key
    }

    public BigInteger getY() {
        return y;
    }

    public BigInteger[] encrypt(BigInteger message, BigInteger publicKey) {
        BigInteger k = new BigInteger(p.bitLength(), random); // ephemeral key
        BigInteger c1 = g.modPow(k, p);
        BigInteger c2 = message.multiply(publicKey.modPow(k, p)).mod(p);
        return new BigInteger[]{c1, c2};
    }

    public BigInteger decrypt(BigInteger[] ciphertext) {
        BigInteger c1 = ciphertext[0];
        BigInteger c2 = ciphertext[1];
        BigInteger m = c2.multiply(c1.modPow(p.subtract(x).subtract(BigInteger.ONE), p)).mod(p);
        return m;
    }

    public static void main(String[] args) {
        Elgamal elGamal = new Elgamal(512); // create an instance with 512-bit prime number
        BigInteger message = new BigInteger("1234567890"); // message to be encrypted

        BigInteger publicKey = elGamal.getY(); // get the public key
        BigInteger[] ciphertext = elGamal.encrypt(message, publicKey); // encrypt the message
        System.out.println("Ciphertext: " + ciphertext[0] + ", " + ciphertext[1]);

        BigInteger decryptedMessage = elGamal.decrypt(ciphertext); // decrypt the ciphertext
        System.out.println("Decrypted message: " + decryptedMessage);
    }
}