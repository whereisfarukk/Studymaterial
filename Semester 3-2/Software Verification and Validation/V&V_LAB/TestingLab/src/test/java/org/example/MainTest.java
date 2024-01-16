package org.example;

import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

class MainTest {


    @Test
    void add() {
        int ans=Main.add(4,6);
        assertEquals(10,ans);
    }

    @Test
    void someMethodOrExpression() {
        boolean result = Main.someMethodOrExpression();
        assertFalse(result);
    }

    @Test
    void methodReturningNull() {
        Object result=Main.methodReturningNull();
        assertNull(result);
    }
}