void loop() {
    int leftSensor = digitalRead(LEFT_SENSOR);
    int rightSensor = digitalRead(RIGHT_SENSOR);
    
    if(leftSensor == HIGH && rightSensor == HIGH) {
        moveForward();    // Both on white - go straight
    }
    else if(leftSensor == LOW && rightSensor == HIGH) {
        turnLeft();       // Left on black - turn left
    }
    else if(leftSensor == HIGH && rightSensor == LOW) {
        turnRight();      // Right on black - turn right
    }
    else {
        stopMotors();     // Both on black - reached end
    }
}
