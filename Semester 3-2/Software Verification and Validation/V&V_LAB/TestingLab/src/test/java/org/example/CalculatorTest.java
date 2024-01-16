package org.example;

import org.junit.jupiter.api.Test;
import org.mockito.Mockito;
import static org.mockito.Mockito.*;
import static org.junit.jupiter.api.Assertions.*;

class CalculatorTest {
//    CalculatorService service=new CalculatorService() {
//        @Override
//        public int add(int i, int j) {
//            return 0;
//        }
//    };
    CalculatorService service= Mockito.mock(CalculatorService.class);
    Calculator calculator= new Calculator(service);
    @Test
    public void testAdd(){
        when(service.add(3,6)).thenReturn(9);
        int result=calculator.perform(3,6);
        assertEquals(27,result);
        verify(service).add(3,6);
    }

}