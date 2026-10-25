<?php

$surname    = isset($_POST['surname'])  ? htmlspecialchars($_POST['surname'])  : '';
$email      = isset($_POST['email'])    ? htmlspecialchars($_POST['email'])    : '';
$passwd     = isset($_POST['passwd'])   ? htmlspecialchars($_POST['passwd'])   : '';
$address    = isset($_POST['address'])  ? htmlspecialchars($_POST['address'])  : '';
$state      = isset($_POST['state'])    ? $_POST['state']                      : '-1';
$sex        = isset($_POST['sex'])      ? $_POST['sex']                        : '';
$vegetarian = isset($_POST['vegetarian']) ? 'checked' : '';
?>
<fieldset>
    <legend>Person Details</legend>

    <form id="myForm" name="myForm"
          action="processData_form.php" method="POST">

        <table>
            <tr>
                <td><label for="surname">Surname</label></td>
                <td>
                    <input type="text" id="surname"
                           name="surname" size="31"
                           value="<?php echo $surname; ?>"/>
                </td>
            </tr>

            <tr>
                <td><label for="email">Email address</label></td>
                <td>
                    <input type="text" id="email"
                           name="email" size="31"
                           value="<?php echo $email; ?>"/>
                </td>
            </tr>

            <tr>
                <td><label for="passwd">Password</label></td>
                <td>
                    <input type="password" id="passwd"
                           name="passwd" size="31"
                           value="<?php echo $passwd; ?>"/>
                </td>
            </tr>

            <tr>
                <td><label for="address">Street Address</label></td>
                <td>
                    <textarea id="address" name="address"
                              rows="3" cols="22"><?php echo $address; ?></textarea>
                </td>
            </tr>

            <tr>
                <td><label for="state">State</label></td>
                <td>
                    <select id="state" name="state">
                        <option value="-1" <?php if ($state == '-1') echo 'selected'; ?>>
                            [choose your state]
                        </option>
                        <option value="1" <?php if ($state == '1') echo 'selected'; ?>>Australian Capital Territory</option>
                        <option value="2" <?php if ($state == '2') echo 'selected'; ?>>Queensland</option>
                        <option value="3" <?php if ($state == '3') echo 'selected'; ?>>Victoria</option>
                        <option value="4" <?php if ($state == '4') echo 'selected'; ?>>New South Wales</option>
                        <option value="5" <?php if ($state == '5') echo 'selected'; ?>>Tasmania</option>
                        <option value="6" <?php if ($state == '6') echo 'selected'; ?>>South Australia</option>
                        <option value="7" <?php if ($state == '7') echo 'selected'; ?>>Western Australia</option>
                        <option value="8" <?php if ($state == '8') echo 'selected'; ?>>Northern Territory</option>
                    </select>
                </td>
            </tr>

            <tr>
                <td><label for="country"></label></td>
                <td>
                    <input type="hidden" id="country"
                           name="country" value="Australia"/>
                </td>
            </tr>

            <tr>
                <td>Gender</td>
                <td>
                    <input type="radio" id="male"
                           name="sex" value="male"
                           <?php if ($sex == 'male') echo 'checked'; ?>/>
                    <label for="male">Male</label>

                    <input type="radio" id="female"
                           name="sex" value="female"
                           <?php if ($sex == 'female') echo 'checked'; ?>/>
                    <label for="female">Female</label>
                </td>
            </tr>

            <tr>
                <td>
                    <label for="vegetarian">Vegetarian?</label>
                </td>
                <td>
                    <input type="checkbox" id="vegetarian"
                           name="vegetarian" value="yes"
                           <?php echo $vegetarian; ?>/>
                </td>
            </tr>

            <tr>
                <td></td>
                <td>
                    <input type="submit" id="submit"
                           name="submit" value="Submit"/>

                    <input type="reset" id="reset"
                           name="reset" value="Reset"/>
                </td>
            </tr>
        </table>

    </form>
</fieldset>
