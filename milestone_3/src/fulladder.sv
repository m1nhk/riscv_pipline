module fulladder(
    input X,     // First operand bit
    input Y,     // Second operand bit
    input Ci,    // Carry-in bit
    output S,    // Sum bit
    output Co    // Carry-out bit
);
    wire w1, w2, w3;

    // XOR gate for the sum of X and Y
    xor G1(w1, X, Y);

    // XOR gate for the sum of w1 and Ci
    xor G2(S, w1, Ci);

    // AND gate to generate partial carry (w1 and Ci)
    and G3(w2, w1, Ci);

    // AND gate to generate partial carry (X and Y)
    and G4(w3, X, Y);

    // OR gate to combine partial carries into final carry-out
    or G5(Co, w2, w3);
    
endmodule
