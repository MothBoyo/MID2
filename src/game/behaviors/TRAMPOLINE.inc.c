void spinning_thing(void){
if (cur_obj_is_mario_on_platform())
{
gMarioState->vel[1] = 80.0f;
set_mario_action(gMarioStates, ACT_TWIRLING,0);
}
}