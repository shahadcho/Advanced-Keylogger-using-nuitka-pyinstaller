/* Generated code for Python module 'charset_normalizer.cd'
 * created by Nuitka version 1.0
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_charset_normalizer$cd" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_charset_normalizer$cd;
PyDictObject *moduledict_charset_normalizer$cd;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[161];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[161];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("charset_normalizer.cd"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 161; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_charset_normalizer$cd(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 161; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6a4cf9490024d19db8a8be7d8ff0a112;
static PyCodeObject *codeobj_4e875939a6bd609189de072cfcffeb20;
static PyCodeObject *codeobj_46eaa3de88c7bfe1b44511eb12c0f073;
static PyCodeObject *codeobj_c71174802ce2f76323febe400478e6d3;
static PyCodeObject *codeobj_8d3a4b012dc5237e8c65d23a68f8b6a7;
static PyCodeObject *codeobj_b78b0b821f15607ba991fd7eeb728d39;
static PyCodeObject *codeobj_9aaaf09daa1005e00070408a8aab5293;
static PyCodeObject *codeobj_217f2335acc899366b818fdc0f00ad1c;
static PyCodeObject *codeobj_af2f66a1a6734434af57c233d7f21c8b;
static PyCodeObject *codeobj_0558bdf38494f6712d37e8f81493c878;
static PyCodeObject *codeobj_b888034ddcfd1d99097dc0d3245bcdbd;
static PyCodeObject *codeobj_cb243c3416a5d89e8323d5659131ec00;
static PyCodeObject *codeobj_c1b740d7ec3d505aadc15d07d4d4ff50;
static PyCodeObject *codeobj_630f2b87052efc1732c7fff835bdcd57;
static PyCodeObject *codeobj_9d157324672b503d06f3d9db856713b7;
static PyCodeObject *codeobj_6fe45e3240e1b029c8f5a70df612a444;
static PyCodeObject *codeobj_6317c7f2c020f2659dff433ce0c6f3dd;
static PyCodeObject *codeobj_41149fb961da33d8e214e3154d00bb64;
static PyCodeObject *codeobj_7277ab2b6c1fb18e400b79f10e624a7f;
static PyCodeObject *codeobj_188a1a55cec391da9c132208c4d26bd2;
static PyCodeObject *codeobj_35f96f2ddf0bbb03150e70be21b0a5bc;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[139]); CHECK_OBJECT(module_filename_obj);
    codeobj_6a4cf9490024d19db8a8be7d8ff0a112 = MAKE_CODEOBJECT(module_filename_obj, 313, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[140], NULL, 1, 0, 0);
    codeobj_4e875939a6bd609189de072cfcffeb20 = MAKE_CODEOBJECT(module_filename_obj, 138, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[141], NULL, 1, 0, 0);
    codeobj_46eaa3de88c7bfe1b44511eb12c0f073 = MAKE_CODEOBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[142], NULL, 1, 0, 0);
    codeobj_c71174802ce2f76323febe400478e6d3 = MAKE_CODEOBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[142], NULL, 1, 0, 0);
    codeobj_8d3a4b012dc5237e8c65d23a68f8b6a7 = MAKE_CODEOBJECT(module_filename_obj, 337, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[142], NULL, 1, 0, 0);
    codeobj_b78b0b821f15607ba991fd7eeb728d39 = MAKE_CODEOBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[144], NULL, 1, 0, 0);
    codeobj_9aaaf09daa1005e00070408a8aab5293 = MAKE_CODEOBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[145], NULL, 1, 0, 0);
    codeobj_217f2335acc899366b818fdc0f00ad1c = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[146], NULL, 1, 0, 0);
    codeobj_af2f66a1a6734434af57c233d7f21c8b = MAKE_CODEOBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[147], NULL, 1, 0, 0);
    codeobj_0558bdf38494f6712d37e8f81493c878 = MAKE_CODEOBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[148], NULL, 1, 0, 0);
    codeobj_b888034ddcfd1d99097dc0d3245bcdbd = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[149], NULL, NULL, 0, 0, 0);
    codeobj_cb243c3416a5d89e8323d5659131ec00 = MAKE_CODEOBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[150], NULL, 1, 0, 0);
    codeobj_c1b740d7ec3d505aadc15d07d4d4ff50 = MAKE_CODEOBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[151], NULL, 2, 0, 0);
    codeobj_630f2b87052efc1732c7fff835bdcd57 = MAKE_CODEOBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[152], NULL, 2, 0, 0);
    codeobj_9d157324672b503d06f3d9db856713b7 = MAKE_CODEOBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[153], NULL, 3, 0, 0);
    codeobj_6fe45e3240e1b029c8f5a70df612a444 = MAKE_CODEOBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[154], NULL, 1, 0, 0);
    codeobj_6317c7f2c020f2659dff433ce0c6f3dd = MAKE_CODEOBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[155], NULL, 1, 0, 0);
    codeobj_41149fb961da33d8e214e3154d00bb64 = MAKE_CODEOBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[156], NULL, 1, 0, 0);
    codeobj_7277ab2b6c1fb18e400b79f10e624a7f = MAKE_CODEOBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[157], NULL, 1, 0, 0);
    codeobj_188a1a55cec391da9c132208c4d26bd2 = MAKE_CODEOBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[133], mod_consts[158], NULL, 1, 0, 0);
    codeobj_35f96f2ddf0bbb03150e70be21b0a5bc = MAKE_CODEOBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[159], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_charset_normalizer$cd$$$function__6_alphabet_languages$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_charset_normalizer$cd$$$function__10_coherence_ratio$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__10_coherence_ratio(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__10_coherence_ratio$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__1_encoding_unicode_range(PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__2_unicode_range_languages(PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__3_encoding_languages(PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__4_mb_encoding_languages(PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__5_get_target_features(PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__6_alphabet_languages(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__6_alphabet_languages$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__7_characters_popularity_compare(PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__8_alpha_unicode_split(PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__9_merge_coherence_ratios(PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__9_merge_coherence_ratios$$$function__1_lambda();


// The module function definitions.
static PyObject *impl_charset_normalizer$cd$$$function__1_encoding_unicode_range(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_iana_name = python_pars[0];
    PyObject *var_p = NULL;
    PyObject *var_seen_ranges = NULL;
    PyObject *var_character_count = NULL;
    PyObject *var_chunk = NULL;
    PyObject *var_character_range = NULL;
    PyObject *var_decoder = NULL;
    PyObject *var_i = NULL;
    PyObject *outline_0_var_character_range = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_6317c7f2c020f2659dff433ce0c6f3dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_217f2335acc899366b818fdc0f00ad1c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_217f2335acc899366b818fdc0f00ad1c_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_6317c7f2c020f2659dff433ce0c6f3dd = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6317c7f2c020f2659dff433ce0c6f3dd)) {
        Py_XDECREF(cache_frame_6317c7f2c020f2659dff433ce0c6f3dd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6317c7f2c020f2659dff433ce0c6f3dd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6317c7f2c020f2659dff433ce0c6f3dd = MAKE_FUNCTION_FRAME(codeobj_6317c7f2c020f2659dff433ce0c6f3dd, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6317c7f2c020f2659dff433ce0c6f3dd->m_type_description == NULL);
    frame_6317c7f2c020f2659dff433ce0c6f3dd = cache_frame_6317c7f2c020f2659dff433ce0c6f3dd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6317c7f2c020f2659dff433ce0c6f3dd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6317c7f2c020f2659dff433ce0c6f3dd) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_iana_name);
        tmp_args_element_value_1 = par_iana_name;
        frame_6317c7f2c020f2659dff433ce0c6f3dd->m_frame.f_lineno = 24;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 24;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[1];
        frame_6317c7f2c020f2659dff433ce0c6f3dd->m_frame.f_lineno = 25;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_IOError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 25;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[2];
        CHECK_OBJECT(par_iana_name);
        tmp_kw_call_arg_value_1_1 = par_iana_name;
        frame_6317c7f2c020f2659dff433ce0c6f3dd->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_name_value_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_name_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_6317c7f2c020f2659dff433ce0c6f3dd->m_frame.f_lineno = 27;
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB();
            PyObject *import_module_func = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(import_module_func, tmp_name_value_1);
            Py_DECREF(import_module_func);
        }
        Py_DECREF(tmp_name_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_decoder == NULL);
        var_decoder = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(var_decoder);
        tmp_called_value_2 = var_decoder;
        frame_6317c7f2c020f2659dff433ce0c6f3dd->m_frame.f_lineno = 29;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[5], 0), mod_consts[6]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_p == NULL);
        var_p = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert(var_seen_ranges == NULL);
        var_seen_ranges = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[7];
        assert(var_character_count == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_character_count = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[8];
        tmp_assign_source_5 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 33;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_7;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_bytes_arg_1;
        PyObject *tmp_list_element_1;
        if (var_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = var_p;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_i);
        tmp_list_element_1 = var_i;
        tmp_bytes_arg_1 = PyList_New(1);
        PyList_SET_ITEM0(tmp_bytes_arg_1, 0, tmp_list_element_1);
        tmp_args_element_value_2 = BUILTIN_BYTES1(tmp_bytes_arg_1);
        Py_DECREF(tmp_bytes_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_6317c7f2c020f2659dff433ce0c6f3dd->m_frame.f_lineno = 34;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_chunk;
            var_chunk = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_chunk);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_chunk);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_chunk);
        tmp_args_element_value_3 = var_chunk;
        frame_6317c7f2c020f2659dff433ce0c6f3dd->m_frame.f_lineno = 37;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_character_range;
            var_character_range = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_character_range);
        tmp_cmp_expr_left_1 = var_character_range;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_start_1;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_character_range);
        tmp_args_element_value_4 = var_character_range;
        frame_6317c7f2c020f2659dff433ce0c6f3dd->m_frame.f_lineno = 42;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = Py_False;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_character_range);
        tmp_cmp_expr_left_3 = var_character_range;
        if (var_seen_ranges == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_3 = var_seen_ranges;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[7];
        if (var_seen_ranges == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_seen_ranges;
        CHECK_OBJECT(var_character_range);
        tmp_ass_subscript_1 = var_character_range;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_10;
        if (var_seen_ranges == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_10 = var_seen_ranges;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_10;
            Py_INCREF(tmp_inplace_assign_subscr_1__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(var_character_range);
        tmp_assign_source_11 = var_character_range;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_11;
            Py_INCREF(tmp_inplace_assign_subscr_1__subscript);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_3 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_subscript_value_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_1__value;
            tmp_inplace_assign_subscr_1__value = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        tmp_iadd_expr_right_1 = mod_consts[14];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_13 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_13;

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_2 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_ass_subscript_2 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (var_character_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_2 = var_character_count;
        tmp_iadd_expr_right_2 = mod_consts[14];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_14 = tmp_iadd_expr_left_2;
        var_character_count = tmp_assign_source_14;

    }
    branch_no_4:;
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 33;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[16]);
        assert(tmp_called_value_6 != NULL);
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_2;
            if (var_seen_ranges == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[13]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 51;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }

            tmp_iter_arg_2 = var_seen_ranges;
            tmp_assign_source_15 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_16;
        }
        if (isFrameUnusable(cache_frame_217f2335acc899366b818fdc0f00ad1c_2)) {
            Py_XDECREF(cache_frame_217f2335acc899366b818fdc0f00ad1c_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_217f2335acc899366b818fdc0f00ad1c_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_217f2335acc899366b818fdc0f00ad1c_2 = MAKE_FUNCTION_FRAME(codeobj_217f2335acc899366b818fdc0f00ad1c, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_217f2335acc899366b818fdc0f00ad1c_2->m_type_description == NULL);
        frame_217f2335acc899366b818fdc0f00ad1c_2 = cache_frame_217f2335acc899366b818fdc0f00ad1c_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_217f2335acc899366b818fdc0f00ad1c_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_217f2335acc899366b818fdc0f00ad1c_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_17 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 49;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_18 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_character_range;
                outline_0_var_character_range = tmp_assign_source_18;
                Py_INCREF(outline_0_var_character_range);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            PyObject *tmp_truediv_expr_left_1;
            PyObject *tmp_truediv_expr_right_1;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            if (var_seen_ranges == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[13]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 52;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }

            tmp_expression_value_4 = var_seen_ranges;
            CHECK_OBJECT(outline_0_var_character_range);
            tmp_subscript_value_2 = outline_0_var_character_range;
            tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
            if (tmp_truediv_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            if (var_character_count == NULL) {
                Py_DECREF(tmp_truediv_expr_left_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[15]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 52;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }

            tmp_truediv_expr_right_1 = var_character_count;
            tmp_cmp_expr_left_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
            Py_DECREF(tmp_truediv_expr_left_1);
            if (tmp_cmp_expr_left_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            tmp_cmp_expr_right_4 = mod_consts[17];
            tmp_condition_result_6 = RICH_COMPARE_GE_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            Py_DECREF(tmp_cmp_expr_left_4);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_character_range);
            tmp_append_value_1 = outline_0_var_character_range;
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "ooo";
                goto try_except_handler_5;
            }
        }
        branch_no_6:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_2 = "ooo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_5);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_217f2335acc899366b818fdc0f00ad1c_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_217f2335acc899366b818fdc0f00ad1c_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_217f2335acc899366b818fdc0f00ad1c_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_217f2335acc899366b818fdc0f00ad1c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_217f2335acc899366b818fdc0f00ad1c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_217f2335acc899366b818fdc0f00ad1c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_217f2335acc899366b818fdc0f00ad1c_2,
            type_description_2,
            outline_0_var_character_range,
            var_seen_ranges,
            var_character_count
        );


        // Release cached frame if used for exception.
        if (frame_217f2335acc899366b818fdc0f00ad1c_2 == cache_frame_217f2335acc899366b818fdc0f00ad1c_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_217f2335acc899366b818fdc0f00ad1c_2);
            cache_frame_217f2335acc899366b818fdc0f00ad1c_2 = NULL;
        }

        assertFrameObject(frame_217f2335acc899366b818fdc0f00ad1c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_character_range);
        outline_0_var_character_range = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_character_range);
        outline_0_var_character_range = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 49;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_6317c7f2c020f2659dff433ce0c6f3dd->m_frame.f_lineno = 48;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6317c7f2c020f2659dff433ce0c6f3dd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6317c7f2c020f2659dff433ce0c6f3dd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6317c7f2c020f2659dff433ce0c6f3dd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6317c7f2c020f2659dff433ce0c6f3dd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6317c7f2c020f2659dff433ce0c6f3dd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6317c7f2c020f2659dff433ce0c6f3dd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6317c7f2c020f2659dff433ce0c6f3dd,
        type_description_1,
        par_iana_name,
        var_p,
        var_seen_ranges,
        var_character_count,
        var_chunk,
        var_character_range,
        var_decoder,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_6317c7f2c020f2659dff433ce0c6f3dd == cache_frame_6317c7f2c020f2659dff433ce0c6f3dd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6317c7f2c020f2659dff433ce0c6f3dd);
        cache_frame_6317c7f2c020f2659dff433ce0c6f3dd = NULL;
    }

    assertFrameObject(frame_6317c7f2c020f2659dff433ce0c6f3dd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_seen_ranges);
    var_seen_ranges = NULL;
    Py_XDECREF(var_character_count);
    var_character_count = NULL;
    Py_XDECREF(var_chunk);
    var_chunk = NULL;
    Py_XDECREF(var_character_range);
    var_character_range = NULL;
    CHECK_OBJECT(var_decoder);
    Py_DECREF(var_decoder);
    var_decoder = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_seen_ranges);
    var_seen_ranges = NULL;
    Py_XDECREF(var_character_count);
    var_character_count = NULL;
    Py_XDECREF(var_chunk);
    var_chunk = NULL;
    Py_XDECREF(var_character_range);
    var_character_range = NULL;
    Py_XDECREF(var_decoder);
    var_decoder = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_iana_name);
    Py_DECREF(par_iana_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_iana_name);
    Py_DECREF(par_iana_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$cd$$$function__2_unicode_range_languages(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_primary_range = python_pars[0];
    PyObject *var_languages = NULL;
    PyObject *var_language = NULL;
    PyObject *var_characters = NULL;
    PyObject *var_character = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_35f96f2ddf0bbb03150e70be21b0a5bc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_35f96f2ddf0bbb03150e70be21b0a5bc = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_languages == NULL);
        var_languages = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_35f96f2ddf0bbb03150e70be21b0a5bc)) {
        Py_XDECREF(cache_frame_35f96f2ddf0bbb03150e70be21b0a5bc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_35f96f2ddf0bbb03150e70be21b0a5bc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_35f96f2ddf0bbb03150e70be21b0a5bc = MAKE_FUNCTION_FRAME(codeobj_35f96f2ddf0bbb03150e70be21b0a5bc, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_35f96f2ddf0bbb03150e70be21b0a5bc->m_type_description == NULL);
    frame_35f96f2ddf0bbb03150e70be21b0a5bc = cache_frame_35f96f2ddf0bbb03150e70be21b0a5bc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_35f96f2ddf0bbb03150e70be21b0a5bc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_35f96f2ddf0bbb03150e70be21b0a5bc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_35f96f2ddf0bbb03150e70be21b0a5bc->m_frame.f_lineno = 63;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 63;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 63;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 63;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 63;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[21];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 63;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_language;
            var_language = tmp_assign_source_7;
            Py_INCREF(var_language);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_characters;
            var_characters = tmp_assign_source_8;
            Py_INCREF(var_characters);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_characters);
        tmp_iter_arg_3 = var_characters;
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 64;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_11 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_character;
            var_character = tmp_assign_source_11;
            Py_INCREF(var_character);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_character);
        tmp_args_element_value_1 = var_character;
        frame_35f96f2ddf0bbb03150e70be21b0a5bc->m_frame.f_lineno = 65;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_primary_range);
        tmp_cmp_expr_right_1 = par_primary_range;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        if (var_languages == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_1 = var_languages;
        CHECK_OBJECT(var_language);
        tmp_args_element_value_2 = var_language;
        frame_35f96f2ddf0bbb03150e70be21b0a5bc->m_frame.f_lineno = 66;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[23], tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto loop_end_2;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 64;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 63;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_languages == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 69;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_languages;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35f96f2ddf0bbb03150e70be21b0a5bc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_35f96f2ddf0bbb03150e70be21b0a5bc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35f96f2ddf0bbb03150e70be21b0a5bc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_35f96f2ddf0bbb03150e70be21b0a5bc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_35f96f2ddf0bbb03150e70be21b0a5bc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35f96f2ddf0bbb03150e70be21b0a5bc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_35f96f2ddf0bbb03150e70be21b0a5bc,
        type_description_1,
        par_primary_range,
        var_languages,
        var_language,
        var_characters,
        var_character
    );


    // Release cached frame if used for exception.
    if (frame_35f96f2ddf0bbb03150e70be21b0a5bc == cache_frame_35f96f2ddf0bbb03150e70be21b0a5bc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_35f96f2ddf0bbb03150e70be21b0a5bc);
        cache_frame_35f96f2ddf0bbb03150e70be21b0a5bc = NULL;
    }

    assertFrameObject(frame_35f96f2ddf0bbb03150e70be21b0a5bc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_languages);
    var_languages = NULL;
    Py_XDECREF(var_language);
    var_language = NULL;
    Py_XDECREF(var_characters);
    var_characters = NULL;
    Py_XDECREF(var_character);
    var_character = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_languages);
    var_languages = NULL;
    Py_XDECREF(var_language);
    var_language = NULL;
    Py_XDECREF(var_characters);
    var_characters = NULL;
    Py_XDECREF(var_character);
    var_character = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_primary_range);
    Py_DECREF(par_primary_range);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_primary_range);
    Py_DECREF(par_primary_range);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$cd$$$function__3_encoding_languages(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_iana_name = python_pars[0];
    PyObject *var_unicode_ranges = NULL;
    PyObject *var_primary_range = NULL;
    PyObject *var_specified_range = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6fe45e3240e1b029c8f5a70df612a444;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6fe45e3240e1b029c8f5a70df612a444 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6fe45e3240e1b029c8f5a70df612a444)) {
        Py_XDECREF(cache_frame_6fe45e3240e1b029c8f5a70df612a444);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6fe45e3240e1b029c8f5a70df612a444 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6fe45e3240e1b029c8f5a70df612a444 = MAKE_FUNCTION_FRAME(codeobj_6fe45e3240e1b029c8f5a70df612a444, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6fe45e3240e1b029c8f5a70df612a444->m_type_description == NULL);
    frame_6fe45e3240e1b029c8f5a70df612a444 = cache_frame_6fe45e3240e1b029c8f5a70df612a444;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6fe45e3240e1b029c8f5a70df612a444);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6fe45e3240e1b029c8f5a70df612a444) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_iana_name);
        tmp_args_element_value_1 = par_iana_name;
        frame_6fe45e3240e1b029c8f5a70df612a444->m_frame.f_lineno = 78;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_unicode_ranges == NULL);
        var_unicode_ranges = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(var_primary_range == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_primary_range = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_unicode_ranges);
        tmp_iter_arg_1 = var_unicode_ranges;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 81;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_specified_range;
            var_specified_range = tmp_assign_source_5;
            Py_INCREF(var_specified_range);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[26];
        CHECK_OBJECT(var_specified_range);
        tmp_cmp_expr_right_1 = var_specified_range;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(var_specified_range);
        tmp_assign_source_6 = var_specified_range;
        {
            PyObject *old = var_primary_range;
            assert(old != NULL);
            var_primary_range = tmp_assign_source_6;
            Py_INCREF(var_primary_range);
            Py_DECREF(old);
        }

    }
    goto loop_end_1;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 81;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_primary_range);
        tmp_cmp_expr_left_2 = var_primary_range;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = LIST_COPY(mod_consts[27]);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_primary_range);
        tmp_args_element_value_2 = var_primary_range;
        frame_6fe45e3240e1b029c8f5a70df612a444->m_frame.f_lineno = 89;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fe45e3240e1b029c8f5a70df612a444);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fe45e3240e1b029c8f5a70df612a444);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fe45e3240e1b029c8f5a70df612a444);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6fe45e3240e1b029c8f5a70df612a444, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fe45e3240e1b029c8f5a70df612a444->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fe45e3240e1b029c8f5a70df612a444, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6fe45e3240e1b029c8f5a70df612a444,
        type_description_1,
        par_iana_name,
        var_unicode_ranges,
        var_primary_range,
        var_specified_range
    );


    // Release cached frame if used for exception.
    if (frame_6fe45e3240e1b029c8f5a70df612a444 == cache_frame_6fe45e3240e1b029c8f5a70df612a444) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6fe45e3240e1b029c8f5a70df612a444);
        cache_frame_6fe45e3240e1b029c8f5a70df612a444 = NULL;
    }

    assertFrameObject(frame_6fe45e3240e1b029c8f5a70df612a444);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_unicode_ranges);
    Py_DECREF(var_unicode_ranges);
    var_unicode_ranges = NULL;
    Py_XDECREF(var_primary_range);
    var_primary_range = NULL;
    Py_XDECREF(var_specified_range);
    var_specified_range = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_unicode_ranges);
    var_unicode_ranges = NULL;
    Py_XDECREF(var_primary_range);
    var_primary_range = NULL;
    Py_XDECREF(var_specified_range);
    var_specified_range = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_iana_name);
    Py_DECREF(par_iana_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_iana_name);
    Py_DECREF(par_iana_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$cd$$$function__4_mb_encoding_languages(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_iana_name = python_pars[0];
    struct Nuitka_FrameObject *frame_7277ab2b6c1fb18e400b79f10e624a7f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7277ab2b6c1fb18e400b79f10e624a7f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7277ab2b6c1fb18e400b79f10e624a7f)) {
        Py_XDECREF(cache_frame_7277ab2b6c1fb18e400b79f10e624a7f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7277ab2b6c1fb18e400b79f10e624a7f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7277ab2b6c1fb18e400b79f10e624a7f = MAKE_FUNCTION_FRAME(codeobj_7277ab2b6c1fb18e400b79f10e624a7f, module_charset_normalizer$cd, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7277ab2b6c1fb18e400b79f10e624a7f->m_type_description == NULL);
    frame_7277ab2b6c1fb18e400b79f10e624a7f = cache_frame_7277ab2b6c1fb18e400b79f10e624a7f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7277ab2b6c1fb18e400b79f10e624a7f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7277ab2b6c1fb18e400b79f10e624a7f) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_iana_name);
        tmp_expression_value_1 = par_iana_name;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7277ab2b6c1fb18e400b79f10e624a7f->m_frame.f_lineno = 99;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[31]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_iana_name);
        tmp_expression_value_2 = par_iana_name;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7277ab2b6c1fb18e400b79f10e624a7f->m_frame.f_lineno = 100;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[32]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_iana_name);
        tmp_expression_value_3 = par_iana_name;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[30]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7277ab2b6c1fb18e400b79f10e624a7f->m_frame.f_lineno = 101;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[33]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT(par_iana_name);
        tmp_cmp_expr_left_1 = par_iana_name;
        tmp_cmp_expr_right_1 = mod_consts[34];
        tmp_or_right_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = LIST_COPY(mod_consts[35]);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_4;
        nuitka_bool tmp_or_left_value_4;
        nuitka_bool tmp_or_right_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_iana_name);
        tmp_expression_value_4 = par_iana_name;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[30]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7277ab2b6c1fb18e400b79f10e624a7f->m_frame.f_lineno = 105;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[36]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        CHECK_OBJECT(par_iana_name);
        tmp_cmp_expr_left_2 = par_iana_name;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_condition_result_2 = tmp_or_left_value_4;
        or_end_4:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = LIST_COPY(mod_consts[38]);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_5;
        nuitka_bool tmp_or_left_value_5;
        nuitka_bool tmp_or_right_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        int tmp_truth_name_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_iana_name);
        tmp_expression_value_5 = par_iana_name;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[30]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7277ab2b6c1fb18e400b79f10e624a7f->m_frame.f_lineno = 107;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[39]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_5 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        tmp_or_left_truth_5 = tmp_or_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_5 == 1) {
            goto or_left_5;
        } else {
            goto or_right_5;
        }
        or_right_5:;
        CHECK_OBJECT(par_iana_name);
        tmp_cmp_expr_left_3 = par_iana_name;
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        tmp_condition_result_3 = tmp_or_left_value_5;
        or_end_5:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = LIST_COPY(mod_consts[41]);
    goto frame_return_exit_1;
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7277ab2b6c1fb18e400b79f10e624a7f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7277ab2b6c1fb18e400b79f10e624a7f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7277ab2b6c1fb18e400b79f10e624a7f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7277ab2b6c1fb18e400b79f10e624a7f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7277ab2b6c1fb18e400b79f10e624a7f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7277ab2b6c1fb18e400b79f10e624a7f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7277ab2b6c1fb18e400b79f10e624a7f,
        type_description_1,
        par_iana_name
    );


    // Release cached frame if used for exception.
    if (frame_7277ab2b6c1fb18e400b79f10e624a7f == cache_frame_7277ab2b6c1fb18e400b79f10e624a7f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7277ab2b6c1fb18e400b79f10e624a7f);
        cache_frame_7277ab2b6c1fb18e400b79f10e624a7f = NULL;
    }

    assertFrameObject(frame_7277ab2b6c1fb18e400b79f10e624a7f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = PyList_New(0);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_iana_name);
    Py_DECREF(par_iana_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_iana_name);
    Py_DECREF(par_iana_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$cd$$$function__5_get_target_features(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_language = python_pars[0];
    PyObject *var_target_have_accents = NULL;
    PyObject *var_target_pure_latin = NULL;
    PyObject *var_character = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_41149fb961da33d8e214e3154d00bb64;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_41149fb961da33d8e214e3154d00bb64 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_False;
        assert(var_target_have_accents == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_target_have_accents = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_True;
        assert(var_target_pure_latin == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_target_pure_latin = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_41149fb961da33d8e214e3154d00bb64)) {
        Py_XDECREF(cache_frame_41149fb961da33d8e214e3154d00bb64);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41149fb961da33d8e214e3154d00bb64 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41149fb961da33d8e214e3154d00bb64 = MAKE_FUNCTION_FRAME(codeobj_41149fb961da33d8e214e3154d00bb64, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_41149fb961da33d8e214e3154d00bb64->m_type_description == NULL);
    frame_41149fb961da33d8e214e3154d00bb64 = cache_frame_41149fb961da33d8e214e3154d00bb64;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_41149fb961da33d8e214e3154d00bb64);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_41149fb961da33d8e214e3154d00bb64) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_language);
        tmp_subscript_value_1 = par_language;
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 121;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_character;
            var_character = tmp_assign_source_5;
            Py_INCREF(var_character);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        if (var_target_have_accents == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_operand_value_1 = var_target_have_accents;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_character);
        tmp_args_element_value_1 = var_character;
        frame_41149fb961da33d8e214e3154d00bb64->m_frame.f_lineno = 122;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 122;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_True;
        {
            PyObject *old = var_target_have_accents;
            var_target_have_accents = tmp_assign_source_6;
            Py_INCREF(var_target_have_accents);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        if (var_target_pure_latin == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(var_target_pure_latin);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_character == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = var_character;
        frame_41149fb961da33d8e214e3154d00bb64->m_frame.f_lineno = 124;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = Py_False;
        tmp_and_right_value_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_False;
        {
            PyObject *old = var_target_pure_latin;
            var_target_pure_latin = tmp_assign_source_7;
            Py_INCREF(var_target_pure_latin);
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 121;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_tuple_element_1;
        if (var_target_have_accents == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_target_have_accents;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_target_pure_latin == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_target_pure_latin;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_41149fb961da33d8e214e3154d00bb64);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_41149fb961da33d8e214e3154d00bb64);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_41149fb961da33d8e214e3154d00bb64);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_41149fb961da33d8e214e3154d00bb64, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41149fb961da33d8e214e3154d00bb64->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41149fb961da33d8e214e3154d00bb64, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41149fb961da33d8e214e3154d00bb64,
        type_description_1,
        par_language,
        var_target_have_accents,
        var_target_pure_latin,
        var_character
    );


    // Release cached frame if used for exception.
    if (frame_41149fb961da33d8e214e3154d00bb64 == cache_frame_41149fb961da33d8e214e3154d00bb64) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_41149fb961da33d8e214e3154d00bb64);
        cache_frame_41149fb961da33d8e214e3154d00bb64 = NULL;
    }

    assertFrameObject(frame_41149fb961da33d8e214e3154d00bb64);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_target_have_accents);
    var_target_have_accents = NULL;
    Py_XDECREF(var_target_pure_latin);
    var_target_pure_latin = NULL;
    Py_XDECREF(var_character);
    var_character = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_target_have_accents);
    var_target_have_accents = NULL;
    Py_XDECREF(var_target_pure_latin);
    var_target_pure_latin = NULL;
    Py_XDECREF(var_character);
    var_character = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_language);
    Py_DECREF(par_language);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_language);
    Py_DECREF(par_language);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$cd$$$function__6_alphabet_languages(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_characters = python_pars[0];
    PyObject *par_ignore_non_latin = python_pars[1];
    PyObject *var_languages = NULL;
    PyObject *var_character_count = NULL;
    PyObject *var_character_match_count = NULL;
    PyObject *var_ratio = NULL;
    nuitka_bool var_source_have_accents = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_language = NULL;
    PyObject *var_language_characters = NULL;
    PyObject *var_target_have_accents = NULL;
    PyObject *var_target_pure_latin = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *outline_1_var_compatible_language = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c1b740d7ec3d505aadc15d07d4d4ff50;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_b78b0b821f15607ba991fd7eeb728d39_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_b78b0b821f15607ba991fd7eeb728d39_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_af2f66a1a6734434af57c233d7f21c8b_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_af2f66a1a6734434af57c233d7f21c8b_3 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_c1b740d7ec3d505aadc15d07d4d4ff50 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_languages == NULL);
        var_languages = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_c1b740d7ec3d505aadc15d07d4d4ff50)) {
        Py_XDECREF(cache_frame_c1b740d7ec3d505aadc15d07d4d4ff50);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1b740d7ec3d505aadc15d07d4d4ff50 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1b740d7ec3d505aadc15d07d4d4ff50 = MAKE_FUNCTION_FRAME(codeobj_c1b740d7ec3d505aadc15d07d4d4ff50, module_charset_normalizer$cd, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c1b740d7ec3d505aadc15d07d4d4ff50->m_type_description == NULL);
    frame_c1b740d7ec3d505aadc15d07d4d4ff50 = cache_frame_c1b740d7ec3d505aadc15d07d4d4ff50;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c1b740d7ec3d505aadc15d07d4d4ff50);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c1b740d7ec3d505aadc15d07d4d4ff50) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_assign_source_2;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_1;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_characters);
            tmp_iter_arg_1 = par_characters;
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_1 = "ooooooboooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_3;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_charset_normalizer$cd$$$function__6_alphabet_languages$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_capi_result_1 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
        assert(!(tmp_truth_name_1 == -1));
        tmp_assign_source_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        var_source_have_accents = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        frame_c1b740d7ec3d505aadc15d07d4d4ff50->m_frame.f_lineno = 140;
        tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooboooo";
                exception_lineno = 140;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooboooo";
            exception_lineno = 140;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooboooo";
            exception_lineno = 140;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooboooo";
                    exception_lineno = 140;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[21];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooboooo";
            exception_lineno = 140;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_language;
            var_language = tmp_assign_source_9;
            Py_INCREF(var_language);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_language_characters;
            var_language_characters = tmp_assign_source_10;
            Py_INCREF(var_language_characters);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_language);
        tmp_args_element_value_1 = var_language;
        frame_c1b740d7ec3d505aadc15d07d4d4ff50->m_frame.f_lineno = 142;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooboooo";
            exception_lineno = 142;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooboooo";
            exception_lineno = 142;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooboooo";
                    exception_lineno = 142;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[21];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooboooo";
            exception_lineno = 142;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_target_have_accents;
            var_target_have_accents = tmp_assign_source_14;
            Py_INCREF(var_target_have_accents);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_target_pure_latin;
            var_target_pure_latin = tmp_assign_source_15;
            Py_INCREF(var_target_pure_latin);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_ignore_non_latin);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_ignore_non_latin);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_3;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_3;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_target_pure_latin);
        tmp_cmp_expr_left_1 = var_target_pure_latin;
        tmp_cmp_expr_right_1 = Py_False;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_start_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_target_have_accents);
        tmp_cmp_expr_left_2 = var_target_have_accents;
        tmp_cmp_expr_right_2 = Py_False;
        tmp_and_left_value_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        assert(var_source_have_accents != NUITKA_BOOL_UNASSIGNED);
        tmp_and_right_value_2 = var_source_have_accents == NUITKA_BOOL_TRUE;
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_start_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_language_characters);
        tmp_len_arg_1 = var_language_characters;
        tmp_assign_source_16 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_character_count;
            var_character_count = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_len_arg_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(var_language_characters);
            tmp_iter_arg_5 = var_language_characters;
            tmp_assign_source_18 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_listcomp_1__$0;
                tmp_listcomp_1__$0 = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = PyList_New(0);
            {
                PyObject *old = tmp_listcomp_1__contraction;
                tmp_listcomp_1__contraction = tmp_assign_source_19;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_b78b0b821f15607ba991fd7eeb728d39_2)) {
            Py_XDECREF(cache_frame_b78b0b821f15607ba991fd7eeb728d39_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b78b0b821f15607ba991fd7eeb728d39_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b78b0b821f15607ba991fd7eeb728d39_2 = MAKE_FUNCTION_FRAME(codeobj_b78b0b821f15607ba991fd7eeb728d39, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_b78b0b821f15607ba991fd7eeb728d39_2->m_type_description == NULL);
        frame_b78b0b821f15607ba991fd7eeb728d39_2 = cache_frame_b78b0b821f15607ba991fd7eeb728d39_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_b78b0b821f15607ba991fd7eeb728d39_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_b78b0b821f15607ba991fd7eeb728d39_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_20 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 153;
                    goto try_except_handler_9;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_20;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_21 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_21;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_3;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(outline_0_var_c);
            tmp_cmp_expr_left_3 = outline_0_var_c;
            CHECK_OBJECT(par_characters);
            tmp_cmp_expr_right_3 = par_characters;
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            tmp_condition_result_3 = (tmp_res == 1) ? true : false;
            if (tmp_condition_result_3 != false) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_c);
            tmp_append_value_1 = outline_0_var_c;
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
        }
        branch_no_3:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_2 = "oo";
            goto try_except_handler_9;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_len_arg_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_len_arg_2);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b78b0b821f15607ba991fd7eeb728d39_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_b78b0b821f15607ba991fd7eeb728d39_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_8;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b78b0b821f15607ba991fd7eeb728d39_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b78b0b821f15607ba991fd7eeb728d39_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b78b0b821f15607ba991fd7eeb728d39_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b78b0b821f15607ba991fd7eeb728d39_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b78b0b821f15607ba991fd7eeb728d39_2,
            type_description_2,
            outline_0_var_c,
            par_characters
        );


        // Release cached frame if used for exception.
        if (frame_b78b0b821f15607ba991fd7eeb728d39_2 == cache_frame_b78b0b821f15607ba991fd7eeb728d39_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_b78b0b821f15607ba991fd7eeb728d39_2);
            cache_frame_b78b0b821f15607ba991fd7eeb728d39_2 = NULL;
        }

        assertFrameObject(frame_b78b0b821f15607ba991fd7eeb728d39_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooboooo";
        goto try_except_handler_8;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 153;
        goto try_except_handler_3;
        outline_result_2:;
        tmp_assign_source_17 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_character_match_count;
            var_character_match_count = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(var_character_match_count);
        tmp_truediv_expr_left_1 = var_character_match_count;
        CHECK_OBJECT(var_character_count);
        tmp_truediv_expr_right_1 = var_character_count;
        tmp_assign_source_22 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_ratio;
            var_ratio = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        double tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_ratio);
        tmp_cmp_expr_left_4 = var_ratio;
        tmp_cmp_expr_right_4 = 0.2;
        tmp_condition_result_4 = RICH_COMPARE_GE_CBOOL_FLOAT_CFLOAT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        if (var_languages == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 159;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_1 = var_languages;
        CHECK_OBJECT(var_language);
        tmp_tuple_element_1 = var_language;
        tmp_args_element_value_2 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_ratio);
        tmp_tuple_element_1 = var_ratio;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
        frame_c1b740d7ec3d505aadc15d07d4d4ff50->m_frame.f_lineno = 159;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[23], tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 140;
        type_description_1 = "ooooooboooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[16]);
        assert(tmp_called_value_3 != NULL);
        if (var_languages == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = var_languages;


        tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_charset_normalizer$cd$$$function__6_alphabet_languages$$$function__1_lambda();

        tmp_kw_call_dict_value_1_1 = Py_True;
        frame_c1b740d7ec3d505aadc15d07d4d4ff50->m_frame.f_lineno = 161;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_languages;
            var_languages = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(var_languages);
        tmp_iter_arg_6 = var_languages;
        tmp_assign_source_24 = MAKE_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_10;
        }
        assert(tmp_listcomp_2__$0 == NULL);
        tmp_listcomp_2__$0 = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = PyList_New(0);
        assert(tmp_listcomp_2__contraction == NULL);
        tmp_listcomp_2__contraction = tmp_assign_source_25;
    }
    if (isFrameUnusable(cache_frame_af2f66a1a6734434af57c233d7f21c8b_3)) {
        Py_XDECREF(cache_frame_af2f66a1a6734434af57c233d7f21c8b_3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af2f66a1a6734434af57c233d7f21c8b_3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af2f66a1a6734434af57c233d7f21c8b_3 = MAKE_FUNCTION_FRAME(codeobj_af2f66a1a6734434af57c233d7f21c8b, module_charset_normalizer$cd, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_af2f66a1a6734434af57c233d7f21c8b_3->m_type_description == NULL);
    frame_af2f66a1a6734434af57c233d7f21c8b_3 = cache_frame_af2f66a1a6734434af57c233d7f21c8b_3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_af2f66a1a6734434af57c233d7f21c8b_3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_af2f66a1a6734434af57c233d7f21c8b_3) == 2); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        tmp_next_source_3 = tmp_listcomp_2__$0;
        tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_26 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 163;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_listcomp_2__iter_value_0;
            tmp_listcomp_2__iter_value_0 = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
        tmp_assign_source_27 = tmp_listcomp_2__iter_value_0;
        {
            PyObject *old = outline_1_var_compatible_language;
            outline_1_var_compatible_language = tmp_assign_source_27;
            Py_INCREF(outline_1_var_compatible_language);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_2;
        PyObject *tmp_append_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_append_list_2 = tmp_listcomp_2__contraction;
        CHECK_OBJECT(outline_1_var_compatible_language);
        tmp_expression_value_2 = outline_1_var_compatible_language;
        tmp_subscript_value_1 = mod_consts[7];
        tmp_append_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_append_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_2 = "o";
            goto try_except_handler_11;
        }
        assert(PyList_Check(tmp_append_list_2));
        tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_2 = "o";
            goto try_except_handler_11;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 163;
        type_description_2 = "o";
        goto try_except_handler_11;
    }
    goto loop_start_3;
    loop_end_3:;
    CHECK_OBJECT(tmp_listcomp_2__contraction);
    tmp_return_value = tmp_listcomp_2__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_11;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT(tmp_listcomp_2__$0);
    Py_DECREF(tmp_listcomp_2__$0);
    tmp_listcomp_2__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_2__contraction);
    Py_DECREF(tmp_listcomp_2__contraction);
    tmp_listcomp_2__contraction = NULL;
    Py_XDECREF(tmp_listcomp_2__iter_value_0);
    tmp_listcomp_2__iter_value_0 = NULL;
    goto frame_return_exit_3;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp_2__$0);
    Py_DECREF(tmp_listcomp_2__$0);
    tmp_listcomp_2__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_2__contraction);
    Py_DECREF(tmp_listcomp_2__contraction);
    tmp_listcomp_2__contraction = NULL;
    Py_XDECREF(tmp_listcomp_2__iter_value_0);
    tmp_listcomp_2__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_3;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_af2f66a1a6734434af57c233d7f21c8b_3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_3:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_af2f66a1a6734434af57c233d7f21c8b_3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_10;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_af2f66a1a6734434af57c233d7f21c8b_3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_af2f66a1a6734434af57c233d7f21c8b_3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af2f66a1a6734434af57c233d7f21c8b_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af2f66a1a6734434af57c233d7f21c8b_3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af2f66a1a6734434af57c233d7f21c8b_3,
        type_description_2,
        outline_1_var_compatible_language
    );


    // Release cached frame if used for exception.
    if (frame_af2f66a1a6734434af57c233d7f21c8b_3 == cache_frame_af2f66a1a6734434af57c233d7f21c8b_3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_af2f66a1a6734434af57c233d7f21c8b_3);
        cache_frame_af2f66a1a6734434af57c233d7f21c8b_3 = NULL;
    }

    assertFrameObject(frame_af2f66a1a6734434af57c233d7f21c8b_3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;
    goto skip_nested_handling_2;
    nested_frame_exit_2:;
    type_description_1 = "ooooooboooo";
    goto try_except_handler_10;
    skip_nested_handling_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_10:;
    Py_XDECREF(outline_1_var_compatible_language);
    outline_1_var_compatible_language = NULL;
    goto outline_result_3;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_1_var_compatible_language);
    outline_1_var_compatible_language = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto outline_exception_2;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_2:;
    exception_lineno = 163;
    goto frame_exception_exit_1;
    outline_result_3:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c1b740d7ec3d505aadc15d07d4d4ff50);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c1b740d7ec3d505aadc15d07d4d4ff50);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c1b740d7ec3d505aadc15d07d4d4ff50);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c1b740d7ec3d505aadc15d07d4d4ff50, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1b740d7ec3d505aadc15d07d4d4ff50->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1b740d7ec3d505aadc15d07d4d4ff50, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1b740d7ec3d505aadc15d07d4d4ff50,
        type_description_1,
        par_characters,
        par_ignore_non_latin,
        var_languages,
        var_character_count,
        var_character_match_count,
        var_ratio,
        (int)var_source_have_accents,
        var_language,
        var_language_characters,
        var_target_have_accents,
        var_target_pure_latin
    );


    // Release cached frame if used for exception.
    if (frame_c1b740d7ec3d505aadc15d07d4d4ff50 == cache_frame_c1b740d7ec3d505aadc15d07d4d4ff50) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c1b740d7ec3d505aadc15d07d4d4ff50);
        cache_frame_c1b740d7ec3d505aadc15d07d4d4ff50 = NULL;
    }

    assertFrameObject(frame_c1b740d7ec3d505aadc15d07d4d4ff50);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_languages);
    Py_DECREF(var_languages);
    var_languages = NULL;
    Py_XDECREF(var_character_count);
    var_character_count = NULL;
    Py_XDECREF(var_character_match_count);
    var_character_match_count = NULL;
    Py_XDECREF(var_ratio);
    var_ratio = NULL;
    assert(var_source_have_accents != NUITKA_BOOL_UNASSIGNED);
    var_source_have_accents = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_language);
    var_language = NULL;
    Py_XDECREF(var_language_characters);
    var_language_characters = NULL;
    Py_XDECREF(var_target_have_accents);
    var_target_have_accents = NULL;
    Py_XDECREF(var_target_pure_latin);
    var_target_pure_latin = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_languages);
    var_languages = NULL;
    Py_XDECREF(var_character_count);
    var_character_count = NULL;
    Py_XDECREF(var_character_match_count);
    var_character_match_count = NULL;
    Py_XDECREF(var_ratio);
    var_ratio = NULL;
    var_source_have_accents = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_language);
    var_language = NULL;
    Py_XDECREF(var_language_characters);
    var_language_characters = NULL;
    Py_XDECREF(var_target_have_accents);
    var_target_have_accents = NULL;
    Py_XDECREF(var_target_pure_latin);
    var_target_pure_latin = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_characters);
    Py_DECREF(par_characters);
    CHECK_OBJECT(par_ignore_non_latin);
    Py_DECREF(par_ignore_non_latin);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_characters);
    Py_DECREF(par_characters);
    CHECK_OBJECT(par_ignore_non_latin);
    Py_DECREF(par_ignore_non_latin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct charset_normalizer$cd$$$function__6_alphabet_languages$$$genexpr__1_genexpr_locals {
    PyObject *var_character;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *charset_normalizer$cd$$$function__6_alphabet_languages$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct charset_normalizer$cd$$$function__6_alphabet_languages$$$genexpr__1_genexpr_locals *generator_heap = (struct charset_normalizer$cd$$$function__6_alphabet_languages$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_character = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_4e875939a6bd609189de072cfcffeb20, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 138;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_character;
            generator_heap->var_character = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_character);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 138;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_character);
        tmp_args_element_value_1 = generator_heap->var_character;
        generator->m_frame->m_frame.f_lineno = 138;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 138;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 138;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 138;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_character
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_character);
    generator_heap->var_character = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_character);
    generator_heap->var_character = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_charset_normalizer$cd$$$function__6_alphabet_languages$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        charset_normalizer$cd$$$function__6_alphabet_languages$$$genexpr__1_genexpr_context,
        module_charset_normalizer$cd,
        mod_consts[54],
#if PYTHON_VERSION >= 0x350
        mod_consts[55],
#endif
        codeobj_4e875939a6bd609189de072cfcffeb20,
        closure,
        1,
        sizeof(struct charset_normalizer$cd$$$function__6_alphabet_languages$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_charset_normalizer$cd$$$function__6_alphabet_languages$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_46eaa3de88c7bfe1b44511eb12c0f073;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_46eaa3de88c7bfe1b44511eb12c0f073 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_46eaa3de88c7bfe1b44511eb12c0f073)) {
        Py_XDECREF(cache_frame_46eaa3de88c7bfe1b44511eb12c0f073);

#if _DEBUG_REFCOUNTS
        if (cache_frame_46eaa3de88c7bfe1b44511eb12c0f073 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_46eaa3de88c7bfe1b44511eb12c0f073 = MAKE_FUNCTION_FRAME(codeobj_46eaa3de88c7bfe1b44511eb12c0f073, module_charset_normalizer$cd, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_46eaa3de88c7bfe1b44511eb12c0f073->m_type_description == NULL);
    frame_46eaa3de88c7bfe1b44511eb12c0f073 = cache_frame_46eaa3de88c7bfe1b44511eb12c0f073;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_46eaa3de88c7bfe1b44511eb12c0f073);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_46eaa3de88c7bfe1b44511eb12c0f073) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_x);
        tmp_expression_value_1 = par_x;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_46eaa3de88c7bfe1b44511eb12c0f073);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_46eaa3de88c7bfe1b44511eb12c0f073);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_46eaa3de88c7bfe1b44511eb12c0f073);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_46eaa3de88c7bfe1b44511eb12c0f073, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_46eaa3de88c7bfe1b44511eb12c0f073->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_46eaa3de88c7bfe1b44511eb12c0f073, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_46eaa3de88c7bfe1b44511eb12c0f073,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_46eaa3de88c7bfe1b44511eb12c0f073 == cache_frame_46eaa3de88c7bfe1b44511eb12c0f073) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_46eaa3de88c7bfe1b44511eb12c0f073);
        cache_frame_46eaa3de88c7bfe1b44511eb12c0f073 = NULL;
    }

    assertFrameObject(frame_46eaa3de88c7bfe1b44511eb12c0f073);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$cd$$$function__7_characters_popularity_compare(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_language = python_pars[0];
    PyObject *par_ordered_characters = python_pars[1];
    PyObject *var_character_approved_count = NULL;
    PyObject *var_characters_before_source = NULL;
    PyObject *var_characters_after_source = NULL;
    PyObject *var_characters_before = NULL;
    PyObject *var_characters_after = NULL;
    PyObject *var_before_match_count = NULL;
    PyObject *var_after_match_count = NULL;
    PyObject *var_FREQUENCIES_language_set = NULL;
    PyObject *var_character = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_630f2b87052efc1732c7fff835bdcd57;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_630f2b87052efc1732c7fff835bdcd57 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_630f2b87052efc1732c7fff835bdcd57)) {
        Py_XDECREF(cache_frame_630f2b87052efc1732c7fff835bdcd57);

#if _DEBUG_REFCOUNTS
        if (cache_frame_630f2b87052efc1732c7fff835bdcd57 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_630f2b87052efc1732c7fff835bdcd57 = MAKE_FUNCTION_FRAME(codeobj_630f2b87052efc1732c7fff835bdcd57, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_630f2b87052efc1732c7fff835bdcd57->m_type_description == NULL);
    frame_630f2b87052efc1732c7fff835bdcd57 = cache_frame_630f2b87052efc1732c7fff835bdcd57;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_630f2b87052efc1732c7fff835bdcd57);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_630f2b87052efc1732c7fff835bdcd57) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_language);
        tmp_cmp_expr_left_1 = par_language;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[56];
        CHECK_OBJECT(par_language);
        tmp_kw_call_arg_value_1_1 = par_language;
        frame_630f2b87052efc1732c7fff835bdcd57->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_630f2b87052efc1732c7fff835bdcd57->m_frame.f_lineno = 175;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 175;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[7];
        assert(var_character_approved_count == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_character_approved_count = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_language);
        tmp_subscript_value_1 = par_language;
        tmp_set_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_set_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_FREQUENCIES_language_set == NULL);
        var_FREQUENCIES_language_set = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_ordered_characters);
        tmp_iter_arg_1 = par_ordered_characters;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooo";
                exception_lineno = 180;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_character;
            var_character = tmp_assign_source_5;
            Py_INCREF(var_character);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_character);
        tmp_cmp_expr_left_2 = var_character;
        CHECK_OBJECT(var_FREQUENCIES_language_set);
        tmp_cmp_expr_right_2 = var_FREQUENCIES_language_set;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_start_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_language);
        tmp_subscript_value_2 = par_language;
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_start_value_1 = mod_consts[7];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 185;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_language);
        tmp_subscript_value_4 = par_language;
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_4);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 185;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[57]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 185;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_character);
        tmp_args_element_value_1 = var_character;
        frame_630f2b87052efc1732c7fff835bdcd57->m_frame.f_lineno = 185;
        tmp_stop_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 185;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_3 = MAKE_SLICEOBJ2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_3 == NULL));
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_2);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_characters_before_source;
            var_characters_before_source = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_start_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_stop_value_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_language);
        tmp_subscript_value_5 = par_language;
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_5);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_6);

            exception_lineno = 188;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_language);
        tmp_subscript_value_7 = par_language;
        tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_7);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_6);

            exception_lineno = 188;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[57]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_6);

            exception_lineno = 188;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_character);
        tmp_args_element_value_2 = var_character;
        frame_630f2b87052efc1732c7fff835bdcd57->m_frame.f_lineno = 188;
        tmp_start_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_start_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_6);

            exception_lineno = 188;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_stop_value_2 = Py_None;
        tmp_subscript_value_6 = MAKE_SLICEOBJ2(tmp_start_value_2, tmp_stop_value_2);
        Py_DECREF(tmp_start_value_2);
        assert(!(tmp_subscript_value_6 == NULL));
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_characters_after_source;
            var_characters_after_source = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_start_value_3;
        PyObject *tmp_stop_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_3;
        if (par_ordered_characters == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_10 = par_ordered_characters;
        tmp_start_value_3 = mod_consts[7];
        if (par_ordered_characters == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_11 = par_ordered_characters;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[57]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_character);
        tmp_args_element_value_3 = var_character;
        frame_630f2b87052efc1732c7fff835bdcd57->m_frame.f_lineno = 191;
        tmp_stop_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_stop_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_8 = MAKE_SLICEOBJ2(tmp_start_value_3, tmp_stop_value_3);
        Py_DECREF(tmp_stop_value_3);
        assert(!(tmp_subscript_value_8 == NULL));
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_characters_before;
            var_characters_before = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_start_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_stop_value_4;
        if (par_ordered_characters == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_12 = par_ordered_characters;
        if (par_ordered_characters == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 194;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_13 = par_ordered_characters;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[57]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_character);
        tmp_args_element_value_4 = var_character;
        frame_630f2b87052efc1732c7fff835bdcd57->m_frame.f_lineno = 194;
        tmp_start_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_start_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_stop_value_4 = Py_None;
        tmp_subscript_value_9 = MAKE_SLICEOBJ2(tmp_start_value_4, tmp_stop_value_4);
        Py_DECREF(tmp_start_value_4);
        assert(!(tmp_subscript_value_9 == NULL));
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_characters_after;
            var_characters_after = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_set_arg_3;
        CHECK_OBJECT(var_characters_before);
        tmp_set_arg_2 = var_characters_before;
        tmp_bitand_expr_left_1 = PySet_New(tmp_set_arg_2);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_characters_before_source);
        tmp_set_arg_3 = var_characters_before_source;
        tmp_bitand_expr_right_1 = PySet_New(tmp_set_arg_3);
        if (tmp_bitand_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_1);

            exception_lineno = 198;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_len_arg_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        Py_DECREF(tmp_bitand_expr_right_1);
        assert(!(tmp_len_arg_1 == NULL));
        tmp_assign_source_10 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_before_match_count;
            var_before_match_count = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        PyObject *tmp_set_arg_4;
        PyObject *tmp_set_arg_5;
        CHECK_OBJECT(var_characters_after);
        tmp_set_arg_4 = var_characters_after;
        tmp_bitand_expr_left_2 = PySet_New(tmp_set_arg_4);
        if (tmp_bitand_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_characters_after_source);
        tmp_set_arg_5 = var_characters_after_source;
        tmp_bitand_expr_right_2 = PySet_New(tmp_set_arg_5);
        if (tmp_bitand_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_2);

            exception_lineno = 202;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_len_arg_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        Py_DECREF(tmp_bitand_expr_left_2);
        Py_DECREF(tmp_bitand_expr_right_2);
        assert(!(tmp_len_arg_2 == NULL));
        tmp_assign_source_11 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_after_match_count;
            var_after_match_count = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_cmp_expr_left_4;
        nuitka_digit tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_characters_before_source);
        tmp_len_arg_3 = var_characters_before_source;
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_3 = 0;
        tmp_and_left_value_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_before_match_count);
        tmp_cmp_expr_left_4 = var_before_match_count;
        tmp_cmp_expr_right_4 = 4;
        tmp_and_right_value_1 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iadd_expr_left_1;
        nuitka_digit tmp_iadd_expr_right_1;
        if (var_character_approved_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = var_character_approved_count;
        tmp_iadd_expr_right_1 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        assert(!(tmp_result == false));
        tmp_assign_source_12 = tmp_iadd_expr_left_1;
        var_character_approved_count = tmp_assign_source_12;

    }
    goto loop_start_1;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_5;
        nuitka_digit tmp_cmp_expr_right_5;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_cmp_expr_left_6;
        nuitka_digit tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_characters_after_source);
        tmp_len_arg_4 = var_characters_after_source;
        tmp_cmp_expr_left_5 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_5 = 0;
        tmp_and_left_value_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_after_match_count);
        tmp_cmp_expr_left_6 = var_after_match_count;
        tmp_cmp_expr_right_6 = 4;
        tmp_and_right_value_2 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iadd_expr_left_2;
        nuitka_digit tmp_iadd_expr_right_2;
        if (var_character_approved_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_2 = var_character_approved_count;
        tmp_iadd_expr_right_2 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        assert(!(tmp_result == false));
        tmp_assign_source_13 = tmp_iadd_expr_left_2;
        var_character_approved_count = tmp_assign_source_13;

    }
    goto loop_start_1;
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_7;
        double tmp_cmp_expr_right_7;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_len_arg_5;
        PyObject *tmp_cmp_expr_left_8;
        double tmp_cmp_expr_right_8;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_len_arg_6;
        CHECK_OBJECT(var_before_match_count);
        tmp_truediv_expr_left_1 = var_before_match_count;
        CHECK_OBJECT(var_characters_before_source);
        tmp_len_arg_5 = var_characters_before_source;
        tmp_truediv_expr_right_1 = BUILTIN_LEN(tmp_len_arg_5);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_left_7 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_7 = 0.4;
        tmp_or_left_value_1 = RICH_COMPARE_GE_CBOOL_FLOAT_CFLOAT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_after_match_count);
        tmp_truediv_expr_left_2 = var_after_match_count;
        CHECK_OBJECT(var_characters_after_source);
        tmp_len_arg_6 = var_characters_after_source;
        tmp_truediv_expr_right_2 = BUILTIN_LEN(tmp_len_arg_6);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_left_8 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_8 = 0.4;
        tmp_or_right_value_1 = RICH_COMPARE_GE_CBOOL_FLOAT_CFLOAT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iadd_expr_left_3;
        nuitka_digit tmp_iadd_expr_right_3;
        if (var_character_approved_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_3 = var_character_approved_count;
        tmp_iadd_expr_right_3 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        assert(!(tmp_result == false));
        tmp_assign_source_14 = tmp_iadd_expr_left_3;
        var_character_approved_count = tmp_assign_source_14;

    }
    goto loop_start_1;
    branch_no_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 180;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_len_arg_7;
        if (var_character_approved_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_left_3 = var_character_approved_count;
        if (par_ordered_characters == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_7 = par_ordered_characters;
        tmp_truediv_expr_right_3 = BUILTIN_LEN(tmp_len_arg_7);
        if (tmp_truediv_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_right_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_630f2b87052efc1732c7fff835bdcd57);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_630f2b87052efc1732c7fff835bdcd57);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_630f2b87052efc1732c7fff835bdcd57);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_630f2b87052efc1732c7fff835bdcd57, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_630f2b87052efc1732c7fff835bdcd57->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_630f2b87052efc1732c7fff835bdcd57, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_630f2b87052efc1732c7fff835bdcd57,
        type_description_1,
        par_language,
        par_ordered_characters,
        var_character_approved_count,
        var_characters_before_source,
        var_characters_after_source,
        var_characters_before,
        var_characters_after,
        var_before_match_count,
        var_after_match_count,
        var_FREQUENCIES_language_set,
        var_character
    );


    // Release cached frame if used for exception.
    if (frame_630f2b87052efc1732c7fff835bdcd57 == cache_frame_630f2b87052efc1732c7fff835bdcd57) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_630f2b87052efc1732c7fff835bdcd57);
        cache_frame_630f2b87052efc1732c7fff835bdcd57 = NULL;
    }

    assertFrameObject(frame_630f2b87052efc1732c7fff835bdcd57);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_character_approved_count);
    var_character_approved_count = NULL;
    Py_XDECREF(var_characters_before_source);
    var_characters_before_source = NULL;
    Py_XDECREF(var_characters_after_source);
    var_characters_after_source = NULL;
    Py_XDECREF(var_characters_before);
    var_characters_before = NULL;
    Py_XDECREF(var_characters_after);
    var_characters_after = NULL;
    Py_XDECREF(var_before_match_count);
    var_before_match_count = NULL;
    Py_XDECREF(var_after_match_count);
    var_after_match_count = NULL;
    CHECK_OBJECT(var_FREQUENCIES_language_set);
    Py_DECREF(var_FREQUENCIES_language_set);
    var_FREQUENCIES_language_set = NULL;
    Py_XDECREF(var_character);
    var_character = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_character_approved_count);
    var_character_approved_count = NULL;
    Py_XDECREF(var_characters_before_source);
    var_characters_before_source = NULL;
    Py_XDECREF(var_characters_after_source);
    var_characters_after_source = NULL;
    Py_XDECREF(var_characters_before);
    var_characters_before = NULL;
    Py_XDECREF(var_characters_after);
    var_characters_after = NULL;
    Py_XDECREF(var_before_match_count);
    var_before_match_count = NULL;
    Py_XDECREF(var_after_match_count);
    var_after_match_count = NULL;
    Py_XDECREF(var_FREQUENCIES_language_set);
    var_FREQUENCIES_language_set = NULL;
    Py_XDECREF(var_character);
    var_character = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_language);
    Py_DECREF(par_language);
    CHECK_OBJECT(par_ordered_characters);
    Py_DECREF(par_ordered_characters);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_language);
    Py_DECREF(par_language);
    CHECK_OBJECT(par_ordered_characters);
    Py_DECREF(par_ordered_characters);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$cd$$$function__8_alpha_unicode_split(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_decoded_sequence = python_pars[0];
    PyObject *var_layers = NULL;
    PyObject *var_character_range = NULL;
    PyObject *var_layer_target_range = NULL;
    PyObject *var_character = NULL;
    PyObject *var_discovered_range = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    struct Nuitka_FrameObject *frame_cb243c3416a5d89e8323d5659131ec00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cb243c3416a5d89e8323d5659131ec00 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert(var_layers == NULL);
        var_layers = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_cb243c3416a5d89e8323d5659131ec00)) {
        Py_XDECREF(cache_frame_cb243c3416a5d89e8323d5659131ec00);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb243c3416a5d89e8323d5659131ec00 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb243c3416a5d89e8323d5659131ec00 = MAKE_FUNCTION_FRAME(codeobj_cb243c3416a5d89e8323d5659131ec00, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cb243c3416a5d89e8323d5659131ec00->m_type_description == NULL);
    frame_cb243c3416a5d89e8323d5659131ec00 = cache_frame_cb243c3416a5d89e8323d5659131ec00;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cb243c3416a5d89e8323d5659131ec00);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cb243c3416a5d89e8323d5659131ec00) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_decoded_sequence);
        tmp_iter_arg_1 = par_decoded_sequence;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 231;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_character;
            var_character = tmp_assign_source_4;
            Py_INCREF(var_character);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_character);
        tmp_expression_value_1 = var_character;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[61]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_cb243c3416a5d89e8323d5659131ec00->m_frame.f_lineno = 232;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = Py_False;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_start_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_character);
        tmp_args_element_value_1 = var_character;
        frame_cb243c3416a5d89e8323d5659131ec00->m_frame.f_lineno = 235;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_character_range;
            var_character_range = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_character_range);
        tmp_cmp_expr_left_2 = var_character_range;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_start_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        {
            PyObject *old = var_layer_target_range;
            var_layer_target_range = tmp_assign_source_6;
            Py_INCREF(var_layer_target_range);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        if (var_layers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 242;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_iter_arg_2 = var_layers;
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 242;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_9 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_discovered_range;
            var_discovered_range = tmp_assign_source_9;
            Py_INCREF(var_discovered_range);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_discovered_range);
        tmp_args_element_value_2 = var_discovered_range;
        if (var_character_range == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 244;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_3 = var_character_range;
        frame_cb243c3416a5d89e8323d5659131ec00->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_3 = Py_False;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(var_discovered_range);
        tmp_assign_source_10 = var_discovered_range;
        {
            PyObject *old = var_layer_target_range;
            assert(old != NULL);
            var_layer_target_range = tmp_assign_source_10;
            Py_INCREF(var_layer_target_range);
            Py_DECREF(old);
        }

    }
    goto loop_end_2;
    branch_no_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 242;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_layer_target_range);
        tmp_cmp_expr_left_4 = var_layer_target_range;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_11;
        if (var_character_range == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 251;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_11 = var_character_range;
        {
            PyObject *old = var_layer_target_range;
            assert(old != NULL);
            var_layer_target_range = tmp_assign_source_11;
            Py_INCREF(var_layer_target_range);
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_layer_target_range);
        tmp_cmp_expr_left_5 = var_layer_target_range;
        if (var_layers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 253;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_5 = var_layers;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_character);
        tmp_expression_value_2 = var_character;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[65]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_cb243c3416a5d89e8323d5659131ec00->m_frame.f_lineno = 254;
        tmp_ass_subvalue_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (var_layers == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 254;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_layers;
        CHECK_OBJECT(var_layer_target_range);
        tmp_ass_subscript_1 = var_layer_target_range;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
    }
    goto loop_start_1;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_12;
        if (var_layers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_12 = var_layers;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_12;
            Py_INCREF(tmp_inplace_assign_subscr_1__target);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(var_layer_target_range);
        tmp_assign_source_13 = var_layer_target_range;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_13;
            Py_INCREF(tmp_inplace_assign_subscr_1__subscript);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_3 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_subscript_value_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_1__value;
            tmp_inplace_assign_subscr_1__value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(var_character);
        tmp_expression_value_4 = var_character;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[65]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        frame_cb243c3416a5d89e8323d5659131ec00->m_frame.f_lineno = 257;
        tmp_iadd_expr_right_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_15 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_15;

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_2 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
        tmp_ass_subscript_2 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
    tmp_inplace_assign_subscr_1__subscript = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 231;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        if (var_layers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 259;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = var_layers;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[66]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_cb243c3416a5d89e8323d5659131ec00->m_frame.f_lineno = 259;
        tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb243c3416a5d89e8323d5659131ec00);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb243c3416a5d89e8323d5659131ec00);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb243c3416a5d89e8323d5659131ec00);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cb243c3416a5d89e8323d5659131ec00, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb243c3416a5d89e8323d5659131ec00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb243c3416a5d89e8323d5659131ec00, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb243c3416a5d89e8323d5659131ec00,
        type_description_1,
        par_decoded_sequence,
        var_layers,
        var_character_range,
        var_layer_target_range,
        var_character,
        var_discovered_range
    );


    // Release cached frame if used for exception.
    if (frame_cb243c3416a5d89e8323d5659131ec00 == cache_frame_cb243c3416a5d89e8323d5659131ec00) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cb243c3416a5d89e8323d5659131ec00);
        cache_frame_cb243c3416a5d89e8323d5659131ec00 = NULL;
    }

    assertFrameObject(frame_cb243c3416a5d89e8323d5659131ec00);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_layers);
    var_layers = NULL;
    Py_XDECREF(var_character_range);
    var_character_range = NULL;
    Py_XDECREF(var_layer_target_range);
    var_layer_target_range = NULL;
    Py_XDECREF(var_character);
    var_character = NULL;
    Py_XDECREF(var_discovered_range);
    var_discovered_range = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_layers);
    var_layers = NULL;
    Py_XDECREF(var_character_range);
    var_character_range = NULL;
    Py_XDECREF(var_layer_target_range);
    var_layer_target_range = NULL;
    Py_XDECREF(var_character);
    var_character = NULL;
    Py_XDECREF(var_discovered_range);
    var_discovered_range = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_decoded_sequence);
    Py_DECREF(par_decoded_sequence);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_decoded_sequence);
    Py_DECREF(par_decoded_sequence);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$cd$$$function__9_merge_coherence_ratios(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_results = python_pars[0];
    PyObject *var_per_language_ratios = NULL;
    PyObject *var_result = NULL;
    PyObject *var_sub_result = NULL;
    PyObject *var_language = NULL;
    PyObject *var_ratio = NULL;
    PyObject *var_merge = NULL;
    PyObject *outline_0_var_language = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_188a1a55cec391da9c132208c4d26bd2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_0558bdf38494f6712d37e8f81493c878_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_0558bdf38494f6712d37e8f81493c878_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_188a1a55cec391da9c132208c4d26bd2 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert(var_per_language_ratios == NULL);
        var_per_language_ratios = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_188a1a55cec391da9c132208c4d26bd2)) {
        Py_XDECREF(cache_frame_188a1a55cec391da9c132208c4d26bd2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_188a1a55cec391da9c132208c4d26bd2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_188a1a55cec391da9c132208c4d26bd2 = MAKE_FUNCTION_FRAME(codeobj_188a1a55cec391da9c132208c4d26bd2, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_188a1a55cec391da9c132208c4d26bd2->m_type_description == NULL);
    frame_188a1a55cec391da9c132208c4d26bd2 = cache_frame_188a1a55cec391da9c132208c4d26bd2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_188a1a55cec391da9c132208c4d26bd2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_188a1a55cec391da9c132208c4d26bd2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_results);
        tmp_iter_arg_1 = par_results;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 268;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_result;
            var_result = tmp_assign_source_4;
            Py_INCREF(var_result);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_result);
        tmp_iter_arg_2 = var_result;
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 269;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_7 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_sub_result;
            var_sub_result = tmp_assign_source_7;
            Py_INCREF(var_sub_result);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_sub_result);
        tmp_iter_arg_3 = var_sub_result;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 270;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 270;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooo";
                    exception_lineno = 270;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[21];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 270;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_language;
            var_language = tmp_assign_source_11;
            Py_INCREF(var_language);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_ratio;
            var_ratio = tmp_assign_source_12;
            Py_INCREF(var_ratio);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_language);
        tmp_cmp_expr_left_1 = var_language;
        if (var_per_language_ratios == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_right_1 = var_per_language_ratios;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_ratio);
        tmp_list_element_1 = var_ratio;
        tmp_ass_subvalue_1 = PyList_New(1);
        PyList_SET_ITEM0(tmp_ass_subvalue_1, 0, tmp_list_element_1);
        if (var_per_language_ratios == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscribed_1 = var_per_language_ratios;
        CHECK_OBJECT(var_language);
        tmp_ass_subscript_1 = var_language;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
    }
    goto loop_start_2;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (var_per_language_ratios == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_1 = var_per_language_ratios;
        CHECK_OBJECT(var_language);
        tmp_subscript_value_1 = var_language;
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_ratio);
        tmp_args_element_value_1 = var_ratio;
        frame_188a1a55cec391da9c132208c4d26bd2->m_frame.f_lineno = 274;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[23], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 269;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 268;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_13;
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_4;
            if (var_per_language_ratios == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 284;
                type_description_1 = "ooooooo";
                goto try_except_handler_6;
            }

            tmp_iter_arg_4 = var_per_language_ratios;
            tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_1 = "ooooooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_15;
        }
        if (isFrameUnusable(cache_frame_0558bdf38494f6712d37e8f81493c878_2)) {
            Py_XDECREF(cache_frame_0558bdf38494f6712d37e8f81493c878_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0558bdf38494f6712d37e8f81493c878_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0558bdf38494f6712d37e8f81493c878_2 = MAKE_FUNCTION_FRAME(codeobj_0558bdf38494f6712d37e8f81493c878, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0558bdf38494f6712d37e8f81493c878_2->m_type_description == NULL);
        frame_0558bdf38494f6712d37e8f81493c878_2 = cache_frame_0558bdf38494f6712d37e8f81493c878_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0558bdf38494f6712d37e8f81493c878_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0558bdf38494f6712d37e8f81493c878_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_3 = tmp_listcomp_1__$0;
            tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_16 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 276;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_17 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_language;
                outline_0_var_language = tmp_assign_source_17;
                Py_INCREF(outline_0_var_language);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_language);
            tmp_tuple_element_1 = outline_0_var_language;
            tmp_append_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_called_value_1;
                PyObject *tmp_args_element_value_2;
                PyObject *tmp_truediv_expr_left_1;
                PyObject *tmp_truediv_expr_right_1;
                PyObject *tmp_sum_sequence_1;
                PyObject *tmp_expression_value_2;
                PyObject *tmp_subscript_value_2;
                PyObject *tmp_len_arg_1;
                PyObject *tmp_expression_value_3;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_args_element_value_3;
                PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_1);
                tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[69]);
                assert(tmp_called_value_1 != NULL);
                if (var_per_language_ratios == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 280;
                    type_description_2 = "oo";
                    goto tuple_build_exception_1;
                }

                tmp_expression_value_2 = var_per_language_ratios;
                CHECK_OBJECT(outline_0_var_language);
                tmp_subscript_value_2 = outline_0_var_language;
                tmp_sum_sequence_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
                if (tmp_sum_sequence_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 280;
                    type_description_2 = "oo";
                    goto tuple_build_exception_1;
                }
                tmp_truediv_expr_left_1 = BUILTIN_SUM1(tmp_sum_sequence_1);
                Py_DECREF(tmp_sum_sequence_1);
                if (tmp_truediv_expr_left_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 280;
                    type_description_2 = "oo";
                    goto tuple_build_exception_1;
                }
                if (var_per_language_ratios == NULL) {
                    Py_DECREF(tmp_truediv_expr_left_1);
                    FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 280;
                    type_description_2 = "oo";
                    goto tuple_build_exception_1;
                }

                tmp_expression_value_3 = var_per_language_ratios;
                CHECK_OBJECT(outline_0_var_language);
                tmp_subscript_value_3 = outline_0_var_language;
                tmp_len_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
                if (tmp_len_arg_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_truediv_expr_left_1);

                    exception_lineno = 280;
                    type_description_2 = "oo";
                    goto tuple_build_exception_1;
                }
                tmp_truediv_expr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
                Py_DECREF(tmp_len_arg_1);
                if (tmp_truediv_expr_right_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_truediv_expr_left_1);

                    exception_lineno = 280;
                    type_description_2 = "oo";
                    goto tuple_build_exception_1;
                }
                tmp_args_element_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
                Py_DECREF(tmp_truediv_expr_left_1);
                Py_DECREF(tmp_truediv_expr_right_1);
                if (tmp_args_element_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 280;
                    type_description_2 = "oo";
                    goto tuple_build_exception_1;
                }
                tmp_args_element_value_3 = mod_consts[70];
                frame_0558bdf38494f6712d37e8f81493c878_2->m_frame.f_lineno = 279;
                {
                    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
                }

                Py_DECREF(tmp_args_element_value_2);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 279;
                    type_description_2 = "oo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_append_value_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_append_value_1);
            goto try_except_handler_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_13 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0558bdf38494f6712d37e8f81493c878_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_0558bdf38494f6712d37e8f81493c878_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0558bdf38494f6712d37e8f81493c878_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0558bdf38494f6712d37e8f81493c878_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0558bdf38494f6712d37e8f81493c878_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0558bdf38494f6712d37e8f81493c878_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0558bdf38494f6712d37e8f81493c878_2,
            type_description_2,
            outline_0_var_language,
            var_per_language_ratios
        );


        // Release cached frame if used for exception.
        if (frame_0558bdf38494f6712d37e8f81493c878_2 == cache_frame_0558bdf38494f6712d37e8f81493c878_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0558bdf38494f6712d37e8f81493c878_2);
            cache_frame_0558bdf38494f6712d37e8f81493c878_2 = NULL;
        }

        assertFrameObject(frame_0558bdf38494f6712d37e8f81493c878_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooo";
        goto try_except_handler_6;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_0_var_language);
        outline_0_var_language = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_language);
        outline_0_var_language = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 276;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_merge == NULL);
        var_merge = tmp_assign_source_13;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[16]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(var_merge);
        tmp_kw_call_arg_value_0_1 = var_merge;


        tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_charset_normalizer$cd$$$function__9_merge_coherence_ratios$$$function__1_lambda();

        tmp_kw_call_dict_value_1_1 = Py_True;
        frame_188a1a55cec391da9c132208c4d26bd2->m_frame.f_lineno = 287;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_188a1a55cec391da9c132208c4d26bd2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_188a1a55cec391da9c132208c4d26bd2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_188a1a55cec391da9c132208c4d26bd2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_188a1a55cec391da9c132208c4d26bd2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_188a1a55cec391da9c132208c4d26bd2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_188a1a55cec391da9c132208c4d26bd2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_188a1a55cec391da9c132208c4d26bd2,
        type_description_1,
        par_results,
        var_per_language_ratios,
        var_result,
        var_sub_result,
        var_language,
        var_ratio,
        var_merge
    );


    // Release cached frame if used for exception.
    if (frame_188a1a55cec391da9c132208c4d26bd2 == cache_frame_188a1a55cec391da9c132208c4d26bd2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_188a1a55cec391da9c132208c4d26bd2);
        cache_frame_188a1a55cec391da9c132208c4d26bd2 = NULL;
    }

    assertFrameObject(frame_188a1a55cec391da9c132208c4d26bd2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_per_language_ratios);
    var_per_language_ratios = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_sub_result);
    var_sub_result = NULL;
    Py_XDECREF(var_language);
    var_language = NULL;
    Py_XDECREF(var_ratio);
    var_ratio = NULL;
    CHECK_OBJECT(var_merge);
    Py_DECREF(var_merge);
    var_merge = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_per_language_ratios);
    var_per_language_ratios = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_sub_result);
    var_sub_result = NULL;
    Py_XDECREF(var_language);
    var_language = NULL;
    Py_XDECREF(var_ratio);
    var_ratio = NULL;
    Py_XDECREF(var_merge);
    var_merge = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_results);
    Py_DECREF(par_results);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_results);
    Py_DECREF(par_results);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$cd$$$function__9_merge_coherence_ratios$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_c71174802ce2f76323febe400478e6d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c71174802ce2f76323febe400478e6d3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c71174802ce2f76323febe400478e6d3)) {
        Py_XDECREF(cache_frame_c71174802ce2f76323febe400478e6d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c71174802ce2f76323febe400478e6d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c71174802ce2f76323febe400478e6d3 = MAKE_FUNCTION_FRAME(codeobj_c71174802ce2f76323febe400478e6d3, module_charset_normalizer$cd, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c71174802ce2f76323febe400478e6d3->m_type_description == NULL);
    frame_c71174802ce2f76323febe400478e6d3 = cache_frame_c71174802ce2f76323febe400478e6d3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c71174802ce2f76323febe400478e6d3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c71174802ce2f76323febe400478e6d3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_x);
        tmp_expression_value_1 = par_x;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c71174802ce2f76323febe400478e6d3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c71174802ce2f76323febe400478e6d3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c71174802ce2f76323febe400478e6d3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c71174802ce2f76323febe400478e6d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c71174802ce2f76323febe400478e6d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c71174802ce2f76323febe400478e6d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c71174802ce2f76323febe400478e6d3,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_c71174802ce2f76323febe400478e6d3 == cache_frame_c71174802ce2f76323febe400478e6d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c71174802ce2f76323febe400478e6d3);
        cache_frame_c71174802ce2f76323febe400478e6d3 = NULL;
    }

    assertFrameObject(frame_c71174802ce2f76323febe400478e6d3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$cd$$$function__10_coherence_ratio(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_decoded_sequence = python_pars[0];
    PyObject *par_threshold = python_pars[1];
    PyObject *par_lg_inclusion = python_pars[2];
    PyObject *var_results = NULL;
    PyObject *var_ignore_non_latin = NULL;
    PyObject *var_sufficient_match_count = NULL;
    PyObject *var_sequence_frequencies = NULL;
    PyObject *var_character_count = NULL;
    PyObject *var_popular_character_ordered = NULL;
    PyObject *var_ratio = NULL;
    PyObject *var_lg_inclusion_list = NULL;
    PyObject *var_layer = NULL;
    PyObject *var_most_common = NULL;
    PyObject *var_language = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *outline_0_var_o = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_9d157324672b503d06f3d9db856713b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_9aaaf09daa1005e00070408a8aab5293_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_9aaaf09daa1005e00070408a8aab5293_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9d157324672b503d06f3d9db856713b7 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_results == NULL);
        var_results = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_False;
        assert(var_ignore_non_latin == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_ignore_non_latin = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[7];
        assert(var_sufficient_match_count == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_sufficient_match_count = tmp_assign_source_3;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_9d157324672b503d06f3d9db856713b7)) {
        Py_XDECREF(cache_frame_9d157324672b503d06f3d9db856713b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d157324672b503d06f3d9db856713b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d157324672b503d06f3d9db856713b7 = MAKE_FUNCTION_FRAME(codeobj_9d157324672b503d06f3d9db856713b7, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9d157324672b503d06f3d9db856713b7->m_type_description == NULL);
    frame_9d157324672b503d06f3d9db856713b7 = cache_frame_9d157324672b503d06f3d9db856713b7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9d157324672b503d06f3d9db856713b7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9d157324672b503d06f3d9db856713b7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_lg_inclusion);
        tmp_cmp_expr_left_1 = par_lg_inclusion;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_lg_inclusion);
        tmp_expression_value_1 = par_lg_inclusion;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[73]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9d157324672b503d06f3d9db856713b7->m_frame.f_lineno = 304;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[74]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_4 = PyList_New(0);
        condexpr_end_1:;
        assert(var_lg_inclusion_list == NULL);
        var_lg_inclusion_list = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = mod_consts[75];
        CHECK_OBJECT(var_lg_inclusion_list);
        tmp_cmp_expr_right_2 = var_lg_inclusion_list;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_True;
        {
            PyObject *old = var_ignore_non_latin;
            assert(old != NULL);
            var_ignore_non_latin = tmp_assign_source_5;
            Py_INCREF(var_ignore_non_latin);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_lg_inclusion_list);
        tmp_called_instance_1 = var_lg_inclusion_list;
        frame_9d157324672b503d06f3d9db856713b7->m_frame.f_lineno = 307;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[77], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_decoded_sequence);
        tmp_args_element_value_1 = par_decoded_sequence;
        frame_9d157324672b503d06f3d9db856713b7->m_frame.f_lineno = 309;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooo";
                exception_lineno = 309;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_layer;
            var_layer = tmp_assign_source_8;
            Py_INCREF(var_layer);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_layer);
        tmp_args_element_value_2 = var_layer;
        frame_9d157324672b503d06f3d9db856713b7->m_frame.f_lineno = 310;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_sequence_frequencies;
            var_sequence_frequencies = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_sequence_frequencies);
        tmp_called_instance_2 = var_sequence_frequencies;
        frame_9d157324672b503d06f3d9db856713b7->m_frame.f_lineno = 311;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[80]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_most_common;
            var_most_common = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_sum_sequence_1;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_most_common);
            tmp_iter_arg_2 = var_most_common;
            tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_genexpr_1__$0;
                tmp_genexpr_1__$0 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_sum_sequence_1 = MAKE_GENERATOR_charset_normalizer$cd$$$function__10_coherence_ratio$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_11 = BUILTIN_SUM1(tmp_sum_sequence_1);
        Py_DECREF(tmp_sum_sequence_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_character_count;
            var_character_count = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_character_count);
        tmp_cmp_expr_left_3 = var_character_count;
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_start_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_13;
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_most_common);
            tmp_iter_arg_3 = var_most_common;
            tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_listcomp_1__$0;
                tmp_listcomp_1__$0 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = PyList_New(0);
            {
                PyObject *old = tmp_listcomp_1__contraction;
                tmp_listcomp_1__contraction = tmp_assign_source_15;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_9aaaf09daa1005e00070408a8aab5293_2)) {
            Py_XDECREF(cache_frame_9aaaf09daa1005e00070408a8aab5293_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9aaaf09daa1005e00070408a8aab5293_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9aaaf09daa1005e00070408a8aab5293_2 = MAKE_FUNCTION_FRAME(codeobj_9aaaf09daa1005e00070408a8aab5293, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_9aaaf09daa1005e00070408a8aab5293_2->m_type_description == NULL);
        frame_9aaaf09daa1005e00070408a8aab5293_2 = cache_frame_9aaaf09daa1005e00070408a8aab5293_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_9aaaf09daa1005e00070408a8aab5293_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_9aaaf09daa1005e00070408a8aab5293_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_16 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 318;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_4 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_18 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 318;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_19 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 318;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_19;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 318;
                        goto try_except_handler_7;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[21];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 318;
                goto try_except_handler_7;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_6;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_5;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_20 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_20;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_21 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_o;
                outline_0_var_o = tmp_assign_source_21;
                Py_INCREF(outline_0_var_o);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_c);
            tmp_append_value_1 = outline_0_var_c;
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_2 = "oo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_13 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9aaaf09daa1005e00070408a8aab5293_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_9aaaf09daa1005e00070408a8aab5293_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_9aaaf09daa1005e00070408a8aab5293_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9aaaf09daa1005e00070408a8aab5293_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9aaaf09daa1005e00070408a8aab5293_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9aaaf09daa1005e00070408a8aab5293_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9aaaf09daa1005e00070408a8aab5293_2,
            type_description_2,
            outline_0_var_c,
            outline_0_var_o
        );


        // Release cached frame if used for exception.
        if (frame_9aaaf09daa1005e00070408a8aab5293_2 == cache_frame_9aaaf09daa1005e00070408a8aab5293_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_9aaaf09daa1005e00070408a8aab5293_2);
            cache_frame_9aaaf09daa1005e00070408a8aab5293_2 = NULL;
        }

        assertFrameObject(frame_9aaaf09daa1005e00070408a8aab5293_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        Py_XDECREF(outline_0_var_o);
        outline_0_var_o = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        Py_XDECREF(outline_0_var_o);
        outline_0_var_o = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 318;
        goto try_except_handler_2;
        outline_result_2:;
        {
            PyObject *old = var_popular_character_ordered;
            var_popular_character_ordered = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_5;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (var_lg_inclusion_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 320;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_or_left_value_1 = var_lg_inclusion_list;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_popular_character_ordered);
        tmp_args_element_value_3 = var_popular_character_ordered;
        if (var_ignore_non_latin == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 321;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = var_ignore_non_latin;
        frame_9d157324672b503d06f3d9db856713b7->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_iter_arg_5 = tmp_or_left_value_1;
        or_end_1:;
        tmp_assign_source_22 = MAKE_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_23 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooo";
                exception_lineno = 320;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_24 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_language;
            var_language = tmp_assign_source_24;
            Py_INCREF(var_language);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_language);
        tmp_args_element_value_5 = var_language;
        if (var_popular_character_ordered == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 324;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_6 = var_popular_character_ordered;
        frame_9d157324672b503d06f3d9db856713b7->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_ratio;
            var_ratio = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_ratio);
        tmp_cmp_expr_left_4 = var_ratio;
        CHECK_OBJECT(par_threshold);
        tmp_cmp_expr_right_4 = par_threshold;
        tmp_condition_result_4 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_start_3;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_ratio);
        tmp_cmp_expr_left_5 = var_ratio;
        tmp_cmp_expr_right_5 = mod_consts[87];
        tmp_condition_result_5 = RICH_COMPARE_GE_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_sufficient_match_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 330;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_iadd_expr_left_1 = var_sufficient_match_count;
        tmp_iadd_expr_right_1 = mod_consts[14];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_26 = tmp_iadd_expr_left_1;
        var_sufficient_match_count = tmp_assign_source_26;

    }
    branch_no_4:;
    branch_end_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_tuple_element_1;
        if (var_results == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 332;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_2 = var_results;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[23]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_language);
        tmp_tuple_element_1 = var_language;
        tmp_args_element_value_7 = PyTuple_New(2);
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_args_element_value_9;
            PyTuple_SET_ITEM0(tmp_args_element_value_7, 0, tmp_tuple_element_1);
            tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts[69]);
            assert(tmp_called_value_7 != NULL);
            CHECK_OBJECT(var_ratio);
            tmp_args_element_value_8 = var_ratio;
            tmp_args_element_value_9 = mod_consts[70];
            frame_9d157324672b503d06f3d9db856713b7->m_frame.f_lineno = 332;
            {
                PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_9d157324672b503d06f3d9db856713b7->m_frame.f_lineno = 332;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        if (var_sufficient_match_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 334;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_left_6 = var_sufficient_match_count;
        tmp_cmp_expr_right_6 = mod_consts[90];
        tmp_condition_result_6 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    goto loop_end_3;
    branch_no_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 320;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 309;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[16]);
        assert(tmp_called_value_8 != NULL);
        if (var_results == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 337;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = var_results;


        tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_charset_normalizer$cd$$$function__10_coherence_ratio$$$function__1_lambda();

        tmp_kw_call_dict_value_1_1 = Py_True;
        frame_9d157324672b503d06f3d9db856713b7->m_frame.f_lineno = 337;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d157324672b503d06f3d9db856713b7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d157324672b503d06f3d9db856713b7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d157324672b503d06f3d9db856713b7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9d157324672b503d06f3d9db856713b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d157324672b503d06f3d9db856713b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d157324672b503d06f3d9db856713b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d157324672b503d06f3d9db856713b7,
        type_description_1,
        par_decoded_sequence,
        par_threshold,
        par_lg_inclusion,
        var_results,
        var_ignore_non_latin,
        var_sufficient_match_count,
        var_sequence_frequencies,
        var_character_count,
        var_popular_character_ordered,
        var_ratio,
        var_lg_inclusion_list,
        var_layer,
        var_most_common,
        var_language
    );


    // Release cached frame if used for exception.
    if (frame_9d157324672b503d06f3d9db856713b7 == cache_frame_9d157324672b503d06f3d9db856713b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9d157324672b503d06f3d9db856713b7);
        cache_frame_9d157324672b503d06f3d9db856713b7 = NULL;
    }

    assertFrameObject(frame_9d157324672b503d06f3d9db856713b7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_results);
    var_results = NULL;
    Py_XDECREF(var_ignore_non_latin);
    var_ignore_non_latin = NULL;
    Py_XDECREF(var_sufficient_match_count);
    var_sufficient_match_count = NULL;
    Py_XDECREF(var_sequence_frequencies);
    var_sequence_frequencies = NULL;
    Py_XDECREF(var_character_count);
    var_character_count = NULL;
    Py_XDECREF(var_popular_character_ordered);
    var_popular_character_ordered = NULL;
    Py_XDECREF(var_ratio);
    var_ratio = NULL;
    Py_XDECREF(var_lg_inclusion_list);
    var_lg_inclusion_list = NULL;
    Py_XDECREF(var_layer);
    var_layer = NULL;
    Py_XDECREF(var_most_common);
    var_most_common = NULL;
    Py_XDECREF(var_language);
    var_language = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_results);
    var_results = NULL;
    Py_XDECREF(var_ignore_non_latin);
    var_ignore_non_latin = NULL;
    Py_XDECREF(var_sufficient_match_count);
    var_sufficient_match_count = NULL;
    Py_XDECREF(var_sequence_frequencies);
    var_sequence_frequencies = NULL;
    Py_XDECREF(var_character_count);
    var_character_count = NULL;
    Py_XDECREF(var_popular_character_ordered);
    var_popular_character_ordered = NULL;
    Py_XDECREF(var_ratio);
    var_ratio = NULL;
    Py_XDECREF(var_lg_inclusion_list);
    var_lg_inclusion_list = NULL;
    Py_XDECREF(var_layer);
    var_layer = NULL;
    Py_XDECREF(var_most_common);
    var_most_common = NULL;
    Py_XDECREF(var_language);
    var_language = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_decoded_sequence);
    Py_DECREF(par_decoded_sequence);
    CHECK_OBJECT(par_threshold);
    Py_DECREF(par_threshold);
    CHECK_OBJECT(par_lg_inclusion);
    Py_DECREF(par_lg_inclusion);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_decoded_sequence);
    Py_DECREF(par_decoded_sequence);
    CHECK_OBJECT(par_threshold);
    Py_DECREF(par_threshold);
    CHECK_OBJECT(par_lg_inclusion);
    Py_DECREF(par_lg_inclusion);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct charset_normalizer$cd$$$function__10_coherence_ratio$$$genexpr__1_genexpr_locals {
    PyObject *var_c;
    PyObject *var_o;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *charset_normalizer$cd$$$function__10_coherence_ratio$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct charset_normalizer$cd$$$function__10_coherence_ratio$$$genexpr__1_genexpr_locals *generator_heap = (struct charset_normalizer$cd$$$function__10_coherence_ratio$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_c = NULL;
    generator_heap->var_o = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_6a4cf9490024d19db8a8be7d8ff0a112, module_charset_normalizer$cd, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 313;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 313;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 313;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 313;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 313;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[21];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 313;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_c;
            generator_heap->var_c = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_c);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_o;
            generator_heap->var_o = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_o);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_o);
        tmp_expression_value_1 = generator_heap->var_o;
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 313;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 313;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_c,
            generator_heap->var_o
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;
    Py_XDECREF(generator_heap->var_o);
    generator_heap->var_o = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;
    Py_XDECREF(generator_heap->var_o);
    generator_heap->var_o = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_charset_normalizer$cd$$$function__10_coherence_ratio$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        charset_normalizer$cd$$$function__10_coherence_ratio$$$genexpr__1_genexpr_context,
        module_charset_normalizer$cd,
        mod_consts[54],
#if PYTHON_VERSION >= 0x350
        mod_consts[93],
#endif
        codeobj_6a4cf9490024d19db8a8be7d8ff0a112,
        closure,
        1,
        sizeof(struct charset_normalizer$cd$$$function__10_coherence_ratio$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_charset_normalizer$cd$$$function__10_coherence_ratio$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_8d3a4b012dc5237e8c65d23a68f8b6a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8d3a4b012dc5237e8c65d23a68f8b6a7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8d3a4b012dc5237e8c65d23a68f8b6a7)) {
        Py_XDECREF(cache_frame_8d3a4b012dc5237e8c65d23a68f8b6a7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8d3a4b012dc5237e8c65d23a68f8b6a7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8d3a4b012dc5237e8c65d23a68f8b6a7 = MAKE_FUNCTION_FRAME(codeobj_8d3a4b012dc5237e8c65d23a68f8b6a7, module_charset_normalizer$cd, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8d3a4b012dc5237e8c65d23a68f8b6a7->m_type_description == NULL);
    frame_8d3a4b012dc5237e8c65d23a68f8b6a7 = cache_frame_8d3a4b012dc5237e8c65d23a68f8b6a7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8d3a4b012dc5237e8c65d23a68f8b6a7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8d3a4b012dc5237e8c65d23a68f8b6a7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_x);
        tmp_expression_value_1 = par_x;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8d3a4b012dc5237e8c65d23a68f8b6a7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8d3a4b012dc5237e8c65d23a68f8b6a7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8d3a4b012dc5237e8c65d23a68f8b6a7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8d3a4b012dc5237e8c65d23a68f8b6a7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8d3a4b012dc5237e8c65d23a68f8b6a7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8d3a4b012dc5237e8c65d23a68f8b6a7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8d3a4b012dc5237e8c65d23a68f8b6a7,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_8d3a4b012dc5237e8c65d23a68f8b6a7 == cache_frame_8d3a4b012dc5237e8c65d23a68f8b6a7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8d3a4b012dc5237e8c65d23a68f8b6a7);
        cache_frame_8d3a4b012dc5237e8c65d23a68f8b6a7 = NULL;
    }

    assertFrameObject(frame_8d3a4b012dc5237e8c65d23a68f8b6a7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__10_coherence_ratio(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$cd$$$function__10_coherence_ratio,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d157324672b503d06f3d9db856713b7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$cd,
        mod_consts[92],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__10_coherence_ratio$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$cd$$$function__10_coherence_ratio$$$function__1_lambda,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_8d3a4b012dc5237e8c65d23a68f8b6a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_charset_normalizer$cd,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__1_encoding_unicode_range(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$cd$$$function__1_encoding_unicode_range,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6317c7f2c020f2659dff433ce0c6f3dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$cd,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__2_unicode_range_languages(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$cd$$$function__2_unicode_range_languages,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_35f96f2ddf0bbb03150e70be21b0a5bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$cd,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__3_encoding_languages(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$cd$$$function__3_encoding_languages,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6fe45e3240e1b029c8f5a70df612a444,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$cd,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__4_mb_encoding_languages(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$cd$$$function__4_mb_encoding_languages,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7277ab2b6c1fb18e400b79f10e624a7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$cd,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__5_get_target_features(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$cd$$$function__5_get_target_features,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_41149fb961da33d8e214e3154d00bb64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$cd,
        mod_consts[48],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__6_alphabet_languages(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$cd$$$function__6_alphabet_languages,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c1b740d7ec3d505aadc15d07d4d4ff50,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$cd,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__6_alphabet_languages$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$cd$$$function__6_alphabet_languages$$$function__1_lambda,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_46eaa3de88c7bfe1b44511eb12c0f073,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_charset_normalizer$cd,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__7_characters_popularity_compare(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$cd$$$function__7_characters_popularity_compare,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_630f2b87052efc1732c7fff835bdcd57,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$cd,
        mod_consts[60],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__8_alpha_unicode_split(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$cd$$$function__8_alpha_unicode_split,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cb243c3416a5d89e8323d5659131ec00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$cd,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__9_merge_coherence_ratios(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$cd$$$function__9_merge_coherence_ratios,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_188a1a55cec391da9c132208c4d26bd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$cd,
        mod_consts[72],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$cd$$$function__9_merge_coherence_ratios$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$cd$$$function__9_merge_coherence_ratios$$$function__1_lambda,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_c71174802ce2f76323febe400478e6d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_charset_normalizer$cd,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_charset_normalizer$cd[] = {
    impl_charset_normalizer$cd$$$function__6_alphabet_languages$$$function__1_lambda,
    impl_charset_normalizer$cd$$$function__9_merge_coherence_ratios$$$function__1_lambda,
    impl_charset_normalizer$cd$$$function__10_coherence_ratio$$$function__1_lambda,
    impl_charset_normalizer$cd$$$function__1_encoding_unicode_range,
    impl_charset_normalizer$cd$$$function__2_unicode_range_languages,
    impl_charset_normalizer$cd$$$function__3_encoding_languages,
    impl_charset_normalizer$cd$$$function__4_mb_encoding_languages,
    impl_charset_normalizer$cd$$$function__5_get_target_features,
    impl_charset_normalizer$cd$$$function__6_alphabet_languages,
    impl_charset_normalizer$cd$$$function__7_characters_popularity_compare,
    impl_charset_normalizer$cd$$$function__8_alpha_unicode_split,
    impl_charset_normalizer$cd$$$function__9_merge_coherence_ratios,
    impl_charset_normalizer$cd$$$function__10_coherence_ratio,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_charset_normalizer$cd;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_charset_normalizer$cd) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_charset_normalizer$cd[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_charset_normalizer$cd,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_charset_normalizer$cd(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("charset_normalizer.cd");

    // Store the module for future use.
    module_charset_normalizer$cd = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("charset_normalizer.cd: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("charset_normalizer.cd: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("charset_normalizer.cd: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcharset_normalizer$cd\n");

    moduledict_charset_normalizer$cd = MODULE_DICT(module_charset_normalizer$cd);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_charset_normalizer$cd,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_charset_normalizer$cd,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[160]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_charset_normalizer$cd,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_charset_normalizer$cd,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_charset_normalizer$cd,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_charset_normalizer$cd);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_charset_normalizer$cd);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_b888034ddcfd1d99097dc0d3245bcdbd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_b888034ddcfd1d99097dc0d3245bcdbd = MAKE_MODULE_FRAME(codeobj_b888034ddcfd1d99097dc0d3245bcdbd, module_charset_normalizer$cd);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_b888034ddcfd1d99097dc0d3245bcdbd);
    assert(Py_REFCNT(frame_b888034ddcfd1d99097dc0d3245bcdbd) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[97], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[98], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_IMPORTLIB();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[101];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_charset_normalizer$cd;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[102];
        tmp_level_value_1 = mod_consts[7];
        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[4],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[103];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_charset_normalizer$cd;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[104];
        tmp_level_value_2 = mod_consts[7];
        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 3;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[79],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        tmp_import_name_from_3 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_import_name_from_3 == NULL));
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[105],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[105]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_8 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_8);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[106],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[106]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[107],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[107]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[108],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[108]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[109],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[109]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_12);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[110];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_charset_normalizer$cd;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[111];
        tmp_level_value_3 = mod_consts[14];
        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 7;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[19],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[112];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_charset_normalizer$cd;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[113];
        tmp_level_value_4 = mod_consts[14];
        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 8;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[40],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[40]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[114],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[114]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[81],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[81]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[37],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[37]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_18);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[115];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_charset_normalizer$cd;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[116];
        tmp_level_value_5 = mod_consts[14];
        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 9;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[63],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[63]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[117];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_charset_normalizer$cd;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[118];
        tmp_level_value_6 = mod_consts[14];
        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 10;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[119],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[119]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[120];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_charset_normalizer$cd;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[121];
        tmp_level_value_7 = mod_consts[14];
        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 11;
        tmp_assign_source_21 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[44],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[44]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[46],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[46]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[0],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[0]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[12],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[12]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_charset_normalizer$cd,
                mod_consts[11],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[11]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_26);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[122];
        tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[123];
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_27 = MAKE_FUNCTION_charset_normalizer$cd$$$function__1_encoding_unicode_range(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[124];
        tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_2 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[123];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_28 = MAKE_FUNCTION_charset_normalizer$cd$$$function__2_unicode_range_languages(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 72;
        tmp_called_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = mod_consts[122];
        tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_3 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[123];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_args_element_value_1 = MAKE_FUNCTION_charset_normalizer$cd$$$function__3_encoding_languages(tmp_annotations_3);

        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 72;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 92;
        tmp_called_value_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = mod_consts[122];
        tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_4 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[123];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_args_element_value_2 = MAKE_FUNCTION_charset_normalizer$cd$$$function__4_mb_encoding_languages(tmp_annotations_4);

        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 92;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 113;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_called_value_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[127]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = mod_consts[128];
        tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_5;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[123];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_5 = mod_consts[129];
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_args_element_value_3 = MAKE_FUNCTION_charset_normalizer$cd$$$function__5_get_target_features(tmp_annotations_5);

        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 113;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        tmp_defaults_1 = mod_consts[130];
        tmp_dict_key_6 = mod_consts[131];
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_7;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[84];
            tmp_dict_value_6 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[123];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_32 = MAKE_FUNCTION_charset_normalizer$cd$$$function__6_alphabet_languages(tmp_defaults_1, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_dict_key_7 = mod_consts[128];
        tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_7 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_8;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[58];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_8 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[123];
            tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_annotations_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;


        tmp_assign_source_33 = MAKE_FUNCTION_charset_normalizer$cd$$$function__7_characters_popularity_compare(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_dict_key_8 = mod_consts[132];
        tmp_dict_value_8 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_8 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_9;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[123];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_9 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_9);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;


        tmp_assign_source_34 = MAKE_FUNCTION_charset_normalizer$cd$$$function__8_alpha_unicode_split(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_10;
        tmp_dict_key_9 = mod_consts[89];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_subscript_value_10 == NULL)) {
            tmp_subscript_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_subscript_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_10);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[123];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto dict_build_exception_9;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;


        tmp_assign_source_35 = MAKE_FUNCTION_charset_normalizer$cd$$$function__9_merge_coherence_ratios(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 290;
        tmp_called_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[134], 0), mod_consts[127]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[135];
        tmp_dict_key_10 = mod_consts[132];
        tmp_dict_value_10 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_10 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_11;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[136];
            tmp_dict_value_10 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[137];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_11);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[123];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_annotations_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_value_4 = MAKE_FUNCTION_charset_normalizer$cd$$$function__10_coherence_ratio(tmp_defaults_2, tmp_annotations_10);

        frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame.f_lineno = 290;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_36);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b888034ddcfd1d99097dc0d3245bcdbd);
#endif
    popFrameStack();

    assertFrameObject(frame_b888034ddcfd1d99097dc0d3245bcdbd);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b888034ddcfd1d99097dc0d3245bcdbd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b888034ddcfd1d99097dc0d3245bcdbd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b888034ddcfd1d99097dc0d3245bcdbd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b888034ddcfd1d99097dc0d3245bcdbd, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("charset_normalizer.cd", false);

    Py_INCREF(module_charset_normalizer$cd);
    return module_charset_normalizer$cd;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$cd, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("charset_normalizer$cd", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
