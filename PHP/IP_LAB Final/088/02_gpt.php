<?php
if (isset($_POST['submit'])) {
    $string = trim($_POST['inputString']);
    $filter = $_POST['filter'];

    $cntChar = 0;
    $cntNum = 0;
    $cntSpecial = 0;

    for ($i = 0; $i < strlen($string); $i++) {
        $ch = $string[$i];

        if (ctype_alpha($ch)) {
            $cntChar++;
        } elseif (ctype_digit($ch)) {
            $cntNum++;
        } else {
            $cntSpecial++;
        }
    }

    echo "<h3>Input String: $string</h3>";
    echo "Letters: $cntChar<br>";
    echo "Numbers: $cntNum<br>";
    echo "Special Characters: $cntSpecial<br>";
}
?>

<form method="post">
    <label>Enter a string:</label>
    <input type="text" name="inputString" required>
    <br><br>
    <button type="submit" name="submit">Count</button>
</form>
